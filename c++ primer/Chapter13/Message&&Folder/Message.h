#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include <set>

class Folder; // Forward declaration of Folder class

class Message
{
    friend class Folder;
    friend void swap(Message &lhs, Message &rhs);

public:
    explicit Message(const std::string &str = " ") : contents(str) {} // Constructor with default value
    Message(const Message &other);                                    // Copy constructor
    Message(Message &&other);                                         // Move constructor
    Message &operator=(Message &&other);                              // Move assignment operator
    Message &operator=(const Message &other);                         // Copy assignment operator
    void save(Folder &f);                                             // Save to a Folder
    void remove(Folder &f);                                           // Remove from a Folder
    ~Message();                                                       // Destructor

private:
    void add_to_Folders(const Message &other); // Add to all Folders
    void remove_to_Folders();                  // Remove from all Folders
    void addFolder(Folder *f);                 // Add a Folder
    void removeFolder(Folder *f);              // Remove a Folder
    void move_Folders(Message *other);         // Move Folders from another Message
    std::string contents;
    std::set<Folder *> folders;
};

// Swap function to exchange two Message objects
void swap(Message &lhs, Message &rhs);

#endif // MESSAGE_H