#include<iostream>
using namespace std;
#include<queue>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};

void test01()
{
	queue<Person>q;

	Person p1("Tom", 21);
	Person p2("Jack", 22);
	Person p3("Jee", 23);
	Person p4("Harden", 24);
	Person p5("Durant", 25);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	q.push(p5);

	while (!q.empty())
	{
		cout << "First element is " << q.front().m_name << "\t" << q.front().m_age << endl;
		cout << "Last element is " << q.back().m_name << "\t" << q.back().m_age << endl;
		q.pop();
	}
	cout << "Size is " << q.size() << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}