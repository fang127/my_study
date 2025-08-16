#ifndef BASKET_H
#define BASKET_H

#include <memory>
#include <set>

class Quote;

class Bulk_quote;

class Basket
{
public:
    void add_item(const Quote &);             // 添加商品到购物篮
    void add_item(Quote &&);                  // 添加移动语义支持
    void total_receipt(std::ostream &) const; // 打印购物篮内容

private:
    static bool compare(const std::shared_ptr<Quote> &lhs, const std::shared_ptr<Quote> &rhs);
    std::multiset<std::shared_ptr<Quote>, decltype(compare) *> items{compare}; // 语法歧义：编译器会将 items(compare) 解释为函数声明，而不是成员变量初始化。成员初始化规则：在类定义中，只能使用花括号 {} 或等号 = 进行就地初始化
};

// 非成员函数声明
double print_total(std::ostream &os, const Quote &item, size_t n);

#endif // BASKET_H