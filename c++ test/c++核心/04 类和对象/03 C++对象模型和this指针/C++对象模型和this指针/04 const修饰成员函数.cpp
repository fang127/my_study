#include<iostream>
using namespace std;

//������
class Person
{
public:

	//thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ�
	//�ڳ�Ա���������const������������thisָ�룬����const Person* const this��ָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{
		//this->m_A = 100;
		//this = NULL//thisָ���ָ�򲻿����޸� ��ָ�볣�� this����Person* const this

		m_B = 100;
	}

	void func()
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���mutable
};

void test01()
{
	Person p;
	p.showPerson();
}

void test02()
{
	const Person p;//�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;//�����޸ģ������������޸���ͨ��Ա����
	p.m_B = 100;//����������ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	//p.func();�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
	p.showPerson();
}

int main()
{
	test01();

	system("pause");

	return 0;
}