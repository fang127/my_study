#include <iostream>
#include "Person.h"
#include <string>
int main()
{
    Person person;
    print(std::cout, person);
    std::cout << "\n";
    Person person02("����", "�����г�����");
    print(std::cout, person02);
    std::cout << "\n";
    Person person03(std::cin);
    print(std::cout, person03);
    std::cout << "\n";
    return 0;
}