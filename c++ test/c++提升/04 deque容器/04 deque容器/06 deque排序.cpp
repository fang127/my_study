#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>//��׼�㷨ͷ�ļ�

void printDeque(int val)
{
	cout << val << " ";
}

void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	cout << "����ǰ��" << endl;
	for_each(d.begin(), d.end(), printDeque);
	cout << endl;

	//����
	//����֧��������ʵĵ�����������������������sort�㷨��������vectorҲ����
	//sortĬ��������� ��С���� ����
	cout << "�����" << endl;
	sort(d.begin(), d.end());
	for_each(d.begin(), d.end(), printDeque);
	cout << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}