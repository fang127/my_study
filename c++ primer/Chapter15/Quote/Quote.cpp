#include <iostream>
#include "Quote.h"

/*

    Quote

*/
// 成员函数
std::ostream &Quote::debug() const
{
    std::cout << "BOOK: ISBN: " << this->BookNo << ", Price: " << this->price;
    return std::cout;
}

/*

    Bulk_quote

*/
// 成员函数
double Bulk_quote::net_price(std::size_t n) const
{
    if (n >= this->qty)
    {
        return n * (1 - this->discount) * this->price; // 如果购买数量大于等于最小购买数量，则应用折扣
    }
    else
    {
        return n * this->price; // 否则不应用折扣
    }
}

std::ostream &Bulk_quote::debug() const
{
    std::cout << "\n";
    this->Quote::debug() << " Bulk_quote: Discount: " << this->discount << ", Min Qty: " << this->qty;
    return std::cout;
}

/*

    Limited_Bulk_quote

*/
// 成员函数
double Limited_Bulk_quote::net_price(std::size_t n) const
{
    if (n <= this->qty)
    {
        return n * (1 - this->discount) * this->price; // 如果购买数量大于等于最小购买数量，则应用折扣
    }
    else
    {
        return this->qty * (1 - this->discount) * this->price + (n - this->qty) * this->price; // 否则不应用折扣
    }
}

std::ostream &Limited_Bulk_quote::debug() const
{
    std::cout << "\n";
    this->Quote::debug() << " Limited_Bulk_quote: Discount: " << this->discount << ", Max Qty: " << this->qty;
    return std::cout;
}