#include "Sales_data.h"

// Member functions
inline double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0.0;
}

Sales_data::Sales_data(std::istream &is)
{
    is >> *this; // 通过重载的输入运算符读取数据
}

Sales_data &Sales_data::operator=(const std::string &s)
{
    this->bookNo = s;
    return *this;
}

/*

非成员函数接口

*/

bool operator==(const Sales_data &lhs, const Sales_data &ths)
{
    return lhs.isbn() == ths.isbn() &&
           lhs.units_sold == ths.units_sold &&
           lhs.revenue == ths.revenue;
}

bool operator!=(const Sales_data &lhs, const Sales_data &ths)
{
    return !(lhs == ths);
}

std::istream &operator>>(std::istream &is, Sales_data &lhs)
{
    double price;
    is >> lhs.bookNo >> lhs.units_sold >> price;
    if (is)
    {
        lhs.revenue = price * lhs.units_sold;
    }
    else // 出入运算符，必须要考虑输入失败的情况
    {
        lhs = Sales_data(); // 如果输入失败，重置为默认状态
    }
    return is;
}

std::ostream &operator<<(std::ostream &io, const Sales_data &lhs)
{
    io << lhs.isbn() << " " << lhs.units_sold << " " << lhs.revenue << " " << lhs.avg_price();
    return io;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs)
{
    if (lhs.isbn() != rhs.isbn())
    {
        throw std::runtime_error("ISBNs do not match");
    }
    Sales_data result(lhs);
    result += rhs;
    return result;
}

Sales_data &Sales_data::operator+=(const Sales_data &lhs)
{
    if (this->isbn() != lhs.isbn())
    {
        throw std::runtime_error("ISBNs do not match");
    }
    this->units_sold += lhs.units_sold;
    this->revenue += lhs.revenue;
    return *this;
}