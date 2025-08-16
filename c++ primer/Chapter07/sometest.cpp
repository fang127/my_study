#include <iostream>

class Person
{
public:
    Person() = default;
    Person(const std::string &name, const std::string &address)
    {
        std::cout << this->name << " " << this->address << "\n";
        this->name = name;
        this->address = address;
        std::cout << this->name << " " << this->address << "\n";
    }

private:
    std::string name = "默认";    // 姓名
    std::string address = "默认"; // 住址
};

int main()
{
    Person person("张三", "北京市海淀区"); // 可以看见如果不是初始化列表，是默认初始化，再赋值，是初始化列表则直接初始化；
    return 0;
}