#include <iostream>
using namespace std;

//�ṹ��Ƕ�׽ṹ��
//����ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};
//������ʦ�ṹ��
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;//������ѧ��
};

int main4()
{
	//������ʦ
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 40;
	t.stu.name = "С��";
	t.stu.age = 18;
	t.stu.score = 100;

	cout << "��ʦ������" << t.name << "  ��ʦ��ţ�" << t.id << "  ��ʦ����" << t.age << "  ��ʦ������ѧ��������" << t.stu.name << "  ѧ�����䣺" << t.stu.age << "  ѧ���ɼ���" << t.stu.score << endl;

	system("pause");

	return 0;
}