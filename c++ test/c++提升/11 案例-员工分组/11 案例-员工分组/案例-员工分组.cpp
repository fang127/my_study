#include<iostream>
using namespace std;
#include<vector>
#include<map>

#define cehua  1
#define meishu 2
#define yanfa  3

// * ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
// * Ա����Ϣ��: ����  ������ɣ����ŷ�Ϊ���߻����������з�
// * �����10��Ա�����䲿�ź͹���
// * ͨ��multimap������Ϣ�Ĳ���  key(���ű��) value(Ա��)
// * �ֲ�����ʾԱ����Ϣ

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
		string name = "Ա��";
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
// 			case 1:cout << "�߻�" << endl;
// 				break;
// 			case 2:cout << "����" << endl;
// 				break;
// 			case 3:cout << "�з�" << endl;
// 				break;
// 			default:
// 				break;
// 			}
// 		}
// 		((*it).second).printPerson();
// 	}

	cout << "�߻����ţ�" << endl;
	multimap<int,Person>::iterator pos = m.find(cehua);
	int num = m.count(cehua);
	int index = 0;
	for (; pos != m.end() && index < num ; pos++ , index++)
	{
		cout << "������" << pos->second.m_name << "\t���ʣ�" << pos->second.m_money << endl;
	}

	cout << "--------------------------------------" << endl;
	cout << "�������ţ�" << endl;
	pos = m.find(meishu);
	num = m.count(meishu);
	index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "������" << pos->second.m_name << "\t���ʣ�" << pos->second.m_money << endl;
	}

	cout << "--------------------------------------" << endl;
	cout << "�з����ţ�" << endl;
	pos = m.find(yanfa);
	num = m.count(yanfa);
	index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "������" << pos->second.m_name << "\t���ʣ�" << pos->second.m_money << endl;
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