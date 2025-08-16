#ifndef FOLDER_H
#define FOLDER_H

#include <set>

class Message;

class Folder
{
    friend class Message;
    friend void swap(Message &lhs, Message &rhs);

public:
    Folder() = default;                 // default construct
    Folder(const Folder &f);            // copy construct
    Folder &operator=(const Folder &f); // copy assignment operator
    void save(Message *msg);            // save message
    void remove(Message *msg);          // remove message
    ~Folder();                          // destructor
private:
    std::set<Message *> messages;
    void add_to_Messages(const Folder &other); // add to all Messages
    void remove_to_Messages();                 // remove from all Messages
    void addMsg(Message *msg);                 // add message
    void remMsg(Message *msg);                 // remove message
};

#endif // FOLDER_H