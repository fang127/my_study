#include "Quote.h"
#include "Basket.h"

bool Basket::compare(const std::shared_ptr<Quote> &lhs, const std::shared_ptr<Quote> &rhs)
{
    return lhs->isbn() < rhs->isbn();
}

void Basket::add_item(const Quote &ths)
{
    /*

    不可以直接make_shared，因为当前的实现会导致对象切片问题，总是创建 Quote 对象，即使传入的是派生类对象。

    */
    // this->items.insert(std::make_shared<Quote>(ths));

    this->items.insert(std::shared_ptr<Quote>(ths.clone())); // 使用克隆函数来确保正确的派生类对象被存储
}

void Basket::add_item(Quote &&ths)
{
    this->items.insert(std::shared_ptr<Quote>(std::move(ths).clone()));
}

void Basket::total_receipt(std::ostream &os) const
{
    double sum = 0.0;
    for (auto iter = items.cbegin(); iter != items.cend(); iter = items.upper_bound(*iter))
    {
        sum += print_total(std::cout, **iter, items.count(*iter));
    }
    os << "Total Sale: " << sum << std::endl;
}

/*

    非成员函数

*/
double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;

    return ret;
}