#include<iostream>
using namespace std;

class Building;

class GoodGay
{
public:

	GoodGay();

	void visit();//��visit�������Է���building��˽�г�Ա

	void visit02();//��visit02���������Է���building��˽�г�Ա

	Building* building;
};

class Building
{
	//���߱�������GoodGay���µ�visit��Ա������Ϊ��������ѣ����Է���˽�г�Ա
	friend void GoodGay::visit();

public:
	Building();

public:

	string m_SittingRoom;

private:
	string m_BedRoom;
};

//����ʵ�ֳ�Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void GoodGay::visit02()
{
	cout << "visit02�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "visit02�������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gay;
	gay.visit();
	gay.visit02();
}

int main()
{
	test01();

	system("pause");

	return 0;
}