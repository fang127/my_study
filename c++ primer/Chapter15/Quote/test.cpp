#include <iostream>
#include <vector>
#include <memory>
#include "Quote.h"
#include "Basket.h"

void debug_quote(const Quote &item)
{
    item.debug(); // 调用调试函数
}

int main()
{
    // Quote basic("100-222-3333-4", 50.0);
    // Bulk_quote bulk("101-222-3333-4", 50.0, 0.2, 10);
    // Limited_Bulk_quote limited_bulk("102-222-3333-4", 50.0, 0.2, 10);
    // print_total(std::cout, basic, 15);
    // print_total(std::cout, bulk, 15);
    // print_total(std::cout, limited_bulk, 15);

    // debug_quote(basic);
    // debug_quote(bulk);
    // debug_quote(limited_bulk);

    // Quote q1("123-456-7890", 29.99); // 调用有参构造函数
    // Quote q2 = q1;                   // 调用拷贝构造函数
    // Quote q3;                        // 调用默认构造函数
    // q3 = q1;                         // 调用拷贝赋值运算符
    // Quote q4(std::move(q1));         // 调用移动构造函数
    // q3 = std::move(q2);              // 调用移动赋值运算符

    // std::cout << "**************************" << std::endl;
    // Bulk_quote bq1("123-456-7890", 29.99, 0.2, 10); // 调用有参构造函数
    // Bulk_quote bq2 = bq1;                           // 调用拷贝构
    // Bulk_quote bq3;                                 // 调用默认构造函数
    // bq3 = bq1;                                      // 调用拷贝赋值运
    // Bulk_quote bq4(std::move(bq1));                 // 调用移动构造函数
    // bq3 = std::move(bq2);                           // 调用移动赋值

    // std::cout << "**************************" << std::endl;
    // Quote *q5 = &bq1; // 基类指针指向派生类对象
    // Quote &q6 = bq2;

    Basket item;
    for (auto i = 0; i < 4; ++i)
        // 不少于 2 本打折
        item.add_item(Bulk_quote("978-7-121-15535-2", 100, 0.2, 2)); // 多态要明确指出创建的对象，显示调用构造函数，避免二义性，编译器不知道该创建哪个对象
    for (auto i = 0; i < 6; ++i)
        // 不少于 5 本打折
        item.add_item(Bulk_quote("978-7-121-15535-1", 100, 0.5, 5));
    item.total_receipt(std::cout);
    return 0;
}