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
    Sales_data() : Sales_data(" ", 0, 0) { std::cout << "Ĭ�Ϲ��캯����ί�й���" << std::endl; }
    Sales_data(const std::string &s) : Sales_data(s, 0, 0) { std::cout << "��һ��ʵ��string��ί�й��캯��" << std::endl; }
    Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n * p) { std::cout << "��3��ʵ�εĹ��캯��" << std::endl; }
    Sales_data(std::istream &is) : Sales_data()
    {
        read(is, *this);
        std::cout << "��һ��ʵ��istream��ί�й��캯��" << std::endl;
    }
    // Sales_data(std::string &s) : bookNo(s), units_sold(0), revenue(0) {} ��ڶ����ȼ�
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