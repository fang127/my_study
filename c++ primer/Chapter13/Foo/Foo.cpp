#include <vector>
#include <algorithm>
#include <iostream>

class Foo
{
public:
    Foo sorted() &&;      // 可用于可改变的右值
    Foo sorted() const &; // 可用于任何类型的 Foo
    // Foo 的其他成员的定义

private:
    std::vector<int> data;
};

// 本对象为右值，因此可以原址排序
Foo Foo::sorted() &&
{
    std::cout << "右值引用版本" << std::endl;

    sort(data.begin(), data.end());
    return *this;
}

// 本对象是 const 或是一个左值，哪种情况我们都不能对其进行原址排序
Foo Foo::sorted() const &
{
    std::cout << "左值引用版本" << std::endl;

    // Foo ret(*this); // 拷贝一个副本
    return Foo(*this).sorted();
}

int main()
{
    Foo f;
    f.sorted(); // 调用返回的是引用类型，故是左值（练习 13.45 区分左值右值）

    return 0;
}