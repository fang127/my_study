#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

int main3()
{
	//1������ѧ���ṹ�����
	struct student s1 = { "����",18,100 };

	//2��ͨ��ָ��ָ��ṹ�����
	//int* p = &s1;//ָ�벻���ݣ�����
	struct student* p = &s1;

	//3��ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ����ʽṹ���е����ԣ���Ҫ����->
	cout << "������" << p->name << "  ���䣺" << p->age << "  ������" << p->score << endl;

	system("pause");

	return 0;
}