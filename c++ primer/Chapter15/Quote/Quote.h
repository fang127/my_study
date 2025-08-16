#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
#include <string>

class Quote
{
public:
    // 拷贝控制成员
    Quote() { std::cout << "Quote的默认构造函数" << std::endl; }; // 默认构造函数

    Quote(const std::string bookno_, double price_) : BookNo(bookno_), price(price_)
    {
        std::cout << "Quote的有参构造函数" << std::endl;
    } // 带参数的构造函数

    Quote(const Quote &ths) : price(ths.price), BookNo(ths.BookNo)
    {
        std::cout << "Quote的拷贝构造函数" << std::endl;
    } // 拷贝构造函数

    Quote &operator=(const Quote &rhs)
    {
        this->BookNo = rhs.BookNo;
        this->price = rhs.price;
        std::cout << "Quote的默认赋值运算符" << std::endl;
        return *this;
    } // 拷贝赋值运算符

    Quote(Quote &&ths) noexcept : BookNo(std::move(ths.BookNo)), price(ths.price)
    {
        std::cout << "Quote的移动构造函数" << std::endl;
    } // 移动构造函数

    Quote &operator=(Quote &&rhs) noexcept
    {
        this->BookNo = std::move(rhs.BookNo);
        this->price = rhs.price;
        std::cout << "Quote的移动赋值运算符" << std::endl;
        return *this;
    } // 移动赋值运算符

    virtual ~Quote() { std::cout << "Quote的析构函数" << std::endl; }; // 默认析构函数

    // 成员函数
    std::string isbn() const { return this->BookNo; }                          // 获取ISBN号
    virtual double net_price(std::size_t n) const { return n * this->price; }  // 获取价格
    virtual std::ostream &debug() const;                                       // 调试函数
    virtual Quote *clone() const & noexcept { return new Quote(*this); }       // 克隆函数，用于复制对象
    virtual Quote *clone() && noexcept { return new Quote(std::move(*this)); } // 移动克隆函数，用于移动对象

protected:
    double price = 0.0;

private:
    std::string BookNo;
};

// 抽象类，继承自Quote
class Disc_Quote : public Quote
{
public:
    // 拷贝控制成员
    Disc_Quote() = default; // 默认构造函数
    Disc_Quote(const std::string bookno_, double price_, double discount_, std::size_t qty_)
        : Quote(bookno_, price_), discount(discount_), qty(qty_) {} // 带参数的构造函数
    Disc_Quote(const Disc_Quote &ths) = default;                    // 拷贝构造函数
    Disc_Quote &operator=(const Disc_Quote &rhs) = default;         // 拷贝赋值运算符
    Disc_Quote(Disc_Quote &&ths) noexcept = default;                // 移动构造函数
    Disc_Quote &operator=(Disc_Quote &&rhs) noexcept = default;     // 移动赋值运算符
    virtual ~Disc_Quote() override = default;                       // 默认析构函数

    // 成员函数
    virtual double net_price(std::size_t n) const override = 0; // 获取价格
    virtual std::ostream &debug() const override = 0;           // 调试函数

protected:
    double discount = 0.0; // 折扣率
    std::size_t qty = 0;   // 购买数量
};

// 继承自Disc_Quote的类
class Bulk_quote : public Disc_Quote
{
public:
    // 拷贝控制成员
    using Disc_Quote::Disc_Quote; // 继承基类的构造函数

    Bulk_quote()
    {
        std::cout << "Bulk_quote的默认构造函数" << std::endl;
    } // 默认构造函数

    Bulk_quote(const std::string bookno_, double price_, double discount_, std::size_t min_qty_)
        : Disc_Quote(bookno_, price_, discount_, min_qty_)
    {
        std::cout << "Bulk_quote的有参构造函数" << std::endl;
    } // 带参数的构造函数

    Bulk_quote(const Bulk_quote &ths) : Disc_Quote(ths)
    {
        std::cout << "Bulk_quote的拷贝构造函数" << std::endl;
    } // 拷贝构造函数

    Bulk_quote &operator=(const Bulk_quote &rhs)
    {
        Disc_Quote::operator=(rhs); // 调用基类的拷贝赋值运算符
        std::cout << "Bulk_quote的默认赋值运算符" << std::endl;
        return *this;
    } // 拷贝赋值运算符

    Bulk_quote(Bulk_quote &&ths) noexcept : Disc_Quote(std::move(ths))
    {
        std::cout << "Bulk_quote的移动构造函数" << std::endl;
    } // 移动构造函数

    Bulk_quote &operator=(Bulk_quote &&rhs)
    {
        Disc_Quote::operator=(std::move(rhs)); // 调用基类的移动赋值运算符
        std::cout << "Bulk_quote的移动赋值运算符" << std::endl;
        return *this;
    } // 移动赋值运算符

    virtual ~Bulk_quote() override
    {
        std::cout << "Bulk_quote的析构函数" << std::endl;
    } // 默认析构函数

    // 成员函数
    virtual double net_price(std::size_t n) const override;                                       // 获取价格
    virtual std::ostream &debug() const override;                                                 // 调试函数
    virtual Bulk_quote *clone() const & noexcept override { return new Bulk_quote(*this); }       // 克隆函数，用于复制对象
    virtual Bulk_quote *clone() && noexcept override { return new Bulk_quote(std::move(*this)); } // 移动克隆函数，用于移动对象
};

class Limited_Bulk_quote : public Disc_Quote
{
public:
    // 拷贝控制成员
    Limited_Bulk_quote() = default; // 默认构造函数
    Limited_Bulk_quote(const std::string bookno_, double price_, double discount_, std::size_t max_qty_)
        : Disc_Quote(bookno_, price_, discount_, max_qty_) {} // 带参数的构造函数
    virtual ~Limited_Bulk_quote() override = default;         // 默认析构函数
    // 成员函数
    virtual double net_price(std::size_t n) const override; // 获取价格
    virtual std::ostream &debug() const override;           // 调试函数
};

#endif // QUOTE_H