#pragma once
#include <iostream>
#include <string>
class Employee
{
    friend std::istream &read(std::istream &is, Employee &employee);
    friend std::ostream &operator<<(std::ostream &os, const Employee &employee);

public:
    Employee() : Employee(" ", " ", 0, 0.0) { std::cout << "Ĭ�Ϲ��캯��" << std::endl; };
    Employee(std::string na, std::string off, double sa, int i) : name(na), office(off), salary(sa), id(i) { std::cout << "��ί�еĹ��캯��" << std::endl; }
    Employee(std::istream &is) : Employee()
    {
        read(is, *this);
        std::cout << "istream���캯��" << std::endl;
    }
    Employee &operator=(const Employee &oth);              // ������ֵ�����
    Employee &operator=(Employee &&oth) noexcept;          // �ƶ���ֵ�����
    operator bool() const { return this->salary > 10000; } // ת�������
    Employee(const Employee &oth);                         // �������캯��
    Employee(Employee &&oth) noexcept;                     // �ƶ����캯��
    ~Employee() = default;

    // private:
    std::string name;
    std::string office;
    double salary = 0.0;
    int id = 0;
};

std::istream &read(std::istream &is, Employee &employee);

// ���������
std::ostream &operator<<(std::ostream &os, const Employee &employee);
