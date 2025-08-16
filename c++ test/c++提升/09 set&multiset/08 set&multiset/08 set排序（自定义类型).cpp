#include<iostream>
using namespace std;
#include<set>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	string m_name;
	int m_age;
};

class compare
{
public:
	bool operator()(const Person& p1, const Person& p2)const
	{
		return p1.m_age > p2.m_age;
	}
};

void test01()
{
	//自定义数据类型，都要指定排序规则，否则编译器不知道按什么参数排序
	set<Person,compare>s;
	Person p1("Tom", 20);
	Person p2("JEE", 25);
	Person p3("Jack", 22);
	Person p4("Jame", 30);
	Person p5("PILL", 10);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	s.insert(p5);

	for (set<Person,compare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << (*it).m_name << " " << (*it).m_age << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}