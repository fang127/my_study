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
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n * p) {}
    Sales_data(std::istream &is);
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
bool compareIsbn(const Sales_data &lhs, const Sales_data &ths);

#endif // SALES_DATA_H