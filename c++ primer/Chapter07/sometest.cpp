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
    std::string name = "Ĭ��";    // ����
    std::string address = "Ĭ��"; // סַ
};

int main()
{
    Person person("����", "�����к�����"); // ���Կ���������ǳ�ʼ���б���Ĭ�ϳ�ʼ�����ٸ�ֵ���ǳ�ʼ���б���ֱ�ӳ�ʼ����
    return 0;
}