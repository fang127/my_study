#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <string>
#include <sstream>
#include <array>
#include <stdexcept>

class Data
{
    friend void read(std::string &s, Data &d);

public:
    Data() = default;
    Data(std::string s) { read(s, *this); }
    void print();

private:
    unsigned year = 2001;
    unsigned month = 1;
    unsigned day = 1;
    std::array<std::string, 12> str{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}; // 月份名称数组
};

void read(std::string &s, Data &d);

inline void Data::print()
{
    std::cout << "Year: " << year << ", Month: " << month << ", Day: " << day << std::endl;
}

#endif // DATA_H