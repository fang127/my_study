#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> up01(new int(42));
    // std::unique_ptr<int> up02 = up01;
    // std::unique_ptr<int> up03(up01);
    // unique_ptr不能拷贝和赋值,因为没有拷贝构造函数和拷贝赋值运算符，都是delete的。

    return 0;
}