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