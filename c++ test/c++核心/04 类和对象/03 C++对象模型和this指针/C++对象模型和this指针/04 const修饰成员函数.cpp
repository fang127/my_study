#include<iostream>
using namespace std;

//常函数
class Person
{
public:

	//this指针的本质 是指针常量 指针的指向是不可以修改的
	//在成员函数后面加const，本质是修饰this指针，等于const Person* const this让指针指向的值也不可以修改
	void showPerson() const
	{
		//this->m_A = 100;
		//this = NULL//this指针的指向不可以修改 即指针常量 this等于Person* const this

		m_B = 100;
	}

	void func()
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable
};

void test01()
{
	Person p;
	p.showPerson();
}

void test02()
{
	const Person p;//在对象前加const，变为常对象
	//p.m_A = 100;//不可修改，常对象不允许修改普通成员属性
	p.m_B = 100;//特殊变量，在常对象下也可以修改

	//常对象只能调用常函数
	//p.func();常对象不可以调用普通成员函数，因为普通成员函数可以修改属性
	p.showPerson();
}

int main()
{
	test01();

	system("pause");

	return 0;
}