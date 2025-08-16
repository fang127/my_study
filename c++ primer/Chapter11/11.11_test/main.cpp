#include <iostream>
#include <set>
#include "Sales_data\include\Sales_data.h"

int main()
{
    // using bijiao = bool (*)(const Sales_data &, const Sales_data &);
    // typedef bool (*bijiao)(const Sales_data &, const Sales_data &);
    // std::multiset<Sales_data, bijiao> bookstore(compareIsbn);
    std::multiset<Sales_data, bool (*)(const Sales_data &, const Sales_data &)> bookstore(compareIsbn);
    return 0;
}