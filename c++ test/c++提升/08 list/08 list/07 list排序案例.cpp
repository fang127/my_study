#include<iostream>
using namespace std;
#include<list>

// 案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
// 排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}
	void printPerson()
	{
		cout << this->m_name << " " << this->m_age << " " << this->m_height << endl;
	}
	
	string m_name;
	int m_age;
	int m_height;
};

void setPerson(list<Person>&L)
{
	srand((unsigned int)time(nullptr));
	string seedname = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		string name = "学生";
		name += seedname[i];
		int age = rand() % 21 + 10;
		int height = rand() % 31 + 160;
		Person p(name,age,height);
		L.push_back(p);
	}
}

void printList(list<Person>& l)
{
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		(*it).printPerson();
	}
}

//指定排序规则
bool mycompare(Person& p1, Person& p2)
{
	if (p1.m_age == p2.m_age)
	{
		return p1.m_height > p2.m_height;
	}
	else
	{
		return p1.m_age < p2.m_age;
	}
}

void test01()
{
	list<Person>L;
	setPerson(L);
	cout << "排序前：" << endl;
	printList(L);
	cout << "排序后：" << endl;
	//L.sort();错误，自定义类型必须指定排序规则
	L.sort(mycompare);
	printList(L);
}

int main()
{
	test01();

	system("pause");

	return 0;
}