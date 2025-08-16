#ifndef HAS_PTR_H
#define HAS_PTR_H

#include <iostream>
#include <string>

class HasPtr
{
    friend void swap(HasPtr &lhs, HasPtr &rhs);

public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { std::cout << "Default constructor" << std::endl; } // Default constructor
    HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) { std::cout << "Copy constructor" << std::endl; }                // Copy constructor
    HasPtr(HasPtr &&hp) noexcept;                                                                                                    // Move constructor
    HasPtr &operator=(const HasPtr &rhs);                                                                                            // Copy assignment operator
    HasPtr &operator=(HasPtr &&rhs) noexcept;                                                                                        // Move assignment operator                                                                // Comparison operator
    void print() const { std::cout << *ps << std::endl; }                                                                            // Print function
    ~HasPtr() { delete ps; };                                                                                                        // Destructor to clean up resources

private:
    std::string *ps;
    int i;
};

// Swap function to exchange two HasPtr objects
inline void swap(HasPtr &lhs, HasPtr &rhs)
{
    std::cout << "Swapped HasPtr objects: " << *lhs.ps << " and " << *rhs.ps << std::endl;
    using std::swap; // Enable ADL
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
}

#endif // HAS_PTR_H