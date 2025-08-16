#include<iostream>
using namespace std;
#include<vector>
#include<map>

#define cehua  1
#define meishu 2
#define yanfa  3

// * 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
// * 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
// * 随机给10名员工分配部门和工资
// * 通过multimap进行信息的插入  key(部门编号) value(员工)
// * 分部门显示员工信息

class Person
{
public:
	Person(string name, int money)
	{
		this->m_money = money;
		this->m_name = name;
	}
// 	void printPerson()const
// 	{
// 		cout << this->m_name << " " << this->m_money << endl;
// 	}

	string m_name;
	int m_money;
};

void setPerson(vector<Person>&v)
{
	srand((unsigned int)time(nullptr));
	string seedname = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		string name = "员工";
		name += seedname[i];
		int money = rand() % 8001 + 3000;
		Person p(name, money);
		v.push_back(p);
	}
}

void fenzu(vector<Person>&v, multimap<int, Person>&m)
{
	srand((unsigned int)time(nullptr));
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		int key = rand() % 3 + 1;
		m.insert(make_pair(key,*it));
	}
}

void printPerson(multimap<int, Person>& m)
{
// 	int id = 0;
// 	for (multimap<int,Person>::iterator it = m.begin(); it != m.end(); it++)
// 	{
// 		if ((*it).first != id)
// 		{
// 			id = (*it).first;
// 			switch (id)
// 			{
// 			case 1:cout << "策划" << endl;
// 				break;
// 			case 2:cout << "美术" << endl;
// 				break;
// 			case 3:cout << "研发" << endl;
// 				break;
// 			default:
// 				break;
// 			}
// 		}
// 		((*it).second).printPerson();
// 	}

	cout << "策划部门：" << endl;
	multimap<int,Person>::iterator pos = m.find(cehua);
	int num = m.count(cehua);
	int index = 0;
	for (; pos != m.end() && index < num ; pos++ , index++)
	{
		cout << "姓名：" << pos->second.m_name << "\t工资：" << pos->second.m_money << endl;
	}

	cout << "--------------------------------------" << endl;
	cout << "美术部门：" << endl;
	pos = m.find(meishu);
	num = m.count(meishu);
	index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_name << "\t工资：" << pos->second.m_money << endl;
	}

	cout << "--------------------------------------" << endl;
	cout << "研发部门：" << endl;
	pos = m.find(yanfa);
	num = m.count(yanfa);
	index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_name << "\t工资：" << pos->second.m_money << endl;
	}
}



int main()
{
	vector<Person>v;
	multimap<int,Person>m;
	setPerson(v);
	fenzu(v,m);
	printPerson(m);

	system("pause");

	return 0;
}