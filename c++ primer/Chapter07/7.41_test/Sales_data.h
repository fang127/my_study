#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>

class Sales_data
{
    // friend functions
    friend std::istream &read(std::istream &, Sales_data &);
    friend std::ostream &print(std::ostream &, const Sales_data &);
    friend Sales_data add(const Sales_data &, const Sales_data &);

    // member functions
public:
    Sales_data() : Sales_data(" ", 0, 0) { std::cout << "默认构造函数的委托构造" << std::endl; }
    Sales_data(const std::string &s) : Sales_data(s, 0, 0) { std::cout << "传一个实参string的委托构造函数" << std::endl; }
    Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n * p) { std::cout << "传3个实参的构造函数" << std::endl; }
    Sales_data(std::istream &is) : Sales_data()
    {
        read(is, *this);
        std::cout << "传一个实参istream的委托构造函数" << std::endl;
    }
    // Sales_data(std::string &s) : bookNo(s), units_sold(0), revenue(0) {} 与第二个等价
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &ths);
    double avg_price() const;

private:
    std::string bookNo;
    unsigned units_sold = 0; // selling units
    double revenue = 0.0;    // total revenue
};

// Non-member functions
Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);
#endif // SALES_DATA_H