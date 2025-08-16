#include <iostream>
#include <string>
#include <vector>

class PrintString
{
    friend std::ostream &operator<<(std::ostream &os, const PrintString &printString);

public:
    PrintString(std::istream &inputStream) : is(inputStream)
    {
    }

    void operator()()
    {
        std::string str;
        while (std::getline(is, str))
        {
            if (is)
            {
                this->vec.push_back(str);
                std::cout << str << std::endl;
            }
        }
    }

private:
    std::istream &is = std::cin; // Default input stream is cin
    std::vector<std::string> vec;
};

std::ostream &operator<<(std::ostream &os, const PrintString &printString)
{
    if (printString.vec.empty())
    {
        os << "No strings to print." << std::endl;
    }
    else
    {
        for (const auto &str : printString.vec)
        {
            os << str << " ";
        }
    }
    return os;
}

int main()
{
    PrintString printString(std::cin);
    printString();                         // Reads from standard input and prints to standard output
    std::cout << printString << std::endl; // Prints the stored strings

    return 0;
}