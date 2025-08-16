#include "Message.h"
#include "Folder.h"

// public
Message::Message(const Message &other) : contents(other.contents), folders(other.folders)
{
    this->add_to_Folders(*this);
}

Message::Message(Message &&other) : contents(std::move(other.contents))
{
    this->move_Folders(&other);
}

Message &Message::operator=(Message &&other)
{
    if (this != &other)
    {
        this->remove_to_Folders();
        this->contents = std::move(other.contents);
        this->move_Folders(&other);
    }

    return *this;
}

Message &Message::operator=(const Message &other)
{
    this->remove_to_Folders();
    this->contents = other.contents;
    this->folders = other.folders;
    add_to_Folders(other);

    return *this;
}

inline void Message::save(Folder &f)
{
    this->folders.insert(&f);
    f.addMsg(this);
}

inline void Message::remove(Folder &f)
{
    this->folders.erase(&f);
    f.remMsg(this);
}

Message::~Message()
{
    this->remove_to_Folders();
}

void Message::addFolder(Folder *f)
{
    this->folders.insert(f);
}

void Message::removeFolder(Folder *f)
{
    this->folders.erase(f);
}

// private
void Message::add_to_Folders(const Message &other)
{
    for (auto folder : other.folders)
        folder->addMsg(this);
}

void Message::remove_to_Folders()
{
    for (auto folder : this->folders)
        folder->remMsg(this);
}

void swap(Message &lhs, Message &rhs)
{
    using std::swap;

    for (auto f : lhs.folders)
        f->remMsg(&lhs);
    for (auto f : rhs.folders)
        f->remMsg(&rhs);

    swap(lhs.contents, rhs.contents);
    swap(lhs.folders, rhs.folders);

    for (auto f : lhs.folders)
        f->addMsg(&lhs);
    for (auto f : rhs.folders)
        f->addMsg(&rhs);
}

void Message::move_Folders(Message *other)
{
    this->folders = std::move(other->folders);
    for (auto f : this->folders)
    {
        f->addMsg(this);
        f->remMsg(other);
    }
    other->folders.clear();
}