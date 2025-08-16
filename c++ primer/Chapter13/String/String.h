#ifndef STRING_H
#define STRING_H

#include <memory>

class String
{
public:
    String() : beg(nullptr), first_free(nullptr), cap(nullptr) {}; // Default constructor
    String(const String &);                                        // Constructor from C-style string
    String(String &&) noexcept;                                    // Move constructor
    String &operator=(String &&) noexcept;                         // Move assignment operator
    String &operator=(const String &);                             // Assignment operator
    ~String();                                                     // Destructor to clean up resources
    size_t size() const;                                           // Returns the size of the string
    size_t capacity() const;                                       // Returns the capacity of the string
    void reserve(size_t);                                          // Reserves space for at least 'n' characters (not implemented here)
    void push_back(const char);                                    // Adds a character to the end of the string
    void resize(size_t);                                           // Resizes the string to a new size (not implemented here)
    void resize(size_t, char);                                     // Resizes the string and fills new characters (not implemented here)
    void clear();                                                  // Clears the string (not implemented here)
    char *begin();                                                 // Returns a pointer to the beginning of the string
    char *end();                                                   // Returns a pointer to the end of the string
    char *begin() const;                                           // Returns a pointer to the beginning of the string
    char *end() const;                                             // Returns a pointer to the end of the string
private:
    static std::allocator<char> allo;                      // Allocator for character data
    char *beg;                                             // Beginning of the string data
    char *first_free;                                      // End of the string data (one past the last character)
    char *cap;                                             // Capacity of the string (one past the last allocated character)
    void reallocate();                                     // Reallocate memory for the string
    void reallocate(size_t);                               // Reallocate memory to a specific size
    std::pair<char *, char *> allo_n_copy(char *, char *); // Allocate memory and copy the contents
    void free();                                           // Free the allocated memory
    void check();                                          // Check if reallocation is needed and perform it if necessary
};

#endif // STRING_H