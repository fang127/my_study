#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>

class Sales_data
{
    // friend functions
    friend std::istream &operator>>(std::istream &is, Sales_data &lhs);
    friend std::ostream &operator<<(std::ostream &io, const Sales_data &lhs);
    friend Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
    friend bool operator==(const Sales_data &lhs, const Sales_data &ths);
    friend bool operator!=(const Sales_data &lhs, const Sales_data &ths);
    friend struct std::hash<Sales_data>;

    // member functions
public:
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n * p) {}
    Sales_data(std::istream &is);
    Sales_data &operator=(const std::string &s);
    // Sales_data(std::string &s) : bookNo(s), units_sold(0), revenue(0) {} 与第二个等价
    std::string isbn() const { return bookNo; }
    double avg_price() const;
    Sales_data &operator+=(const Sales_data &lhs);
    explicit operator std::string() const { return this->isbn(); } // 转换为ISBN字符串
    explicit operator double() const { return this->revenue; }     // 转换为销售额double

private:
    std::string bookNo;
    unsigned units_sold = 0; // selling units
    double revenue = 0.0;    // total revenue
};

// Non-member functions
// 重载运算符
bool operator==(const Sales_data &lhs, const Sales_data &ths);
bool operator!=(const Sales_data &lhs, const Sales_data &ths);
std::istream &operator>>(std::istream &is, Sales_data &lhs);
std::ostream &operator<<(std::ostream &io, const Sales_data &lhs);
Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);

namespace std
{
    template <>
    struct hash<Sales_data>
    {
        typedef size_t result_type;

        typedef Sales_data argument_type;

        result_type operator()(const argument_type &s) const
        {
            return hash<string>()(s.isbn()) ^
                   hash<unsigned>()(s.units_sold) ^
                   hash<double>()(s.revenue);
        }
    };
}

#endif // SALES_DATA_H