#include "Folder.h"
#include "Message.h"

Folder::Folder(const Folder &f) : messages(f.messages)
{
    add_to_Messages(f);
}

Folder &Folder::operator=(const Folder &f)
{
    this->remove_to_Messages();
    this->messages = f.messages;
    this->add_to_Messages(f);

    return *this;
}

void Folder::save(Message *msg)
{
    this->messages.insert(msg);
    msg->addFolder(this);
}

void Folder::remove(Message *msg)
{
    this->messages.erase(msg);
    msg->removeFolder(this);
}

Folder::~Folder()
{
    this->remove_to_Messages();
}

// private
void Folder::add_to_Messages(const Folder &other)
{
    for (auto msg : other.messages)
        msg->addFolder(this);
}

void Folder::remove_to_Messages()
{
    for (auto msg : this->messages)
        msg->removeFolder(this);
}

void Folder::addMsg(Message *msg)
{
    this->messages.insert(msg);
}

void Folder::remMsg(Message *msg)
{
    this->messages.erase(msg);
}