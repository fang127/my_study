#include <iostream>
using namespace std;

//1������ѧ����������  ѧ���������������䣬����
//�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
struct student
{
	//��Ա�б�

	//����
	string name;
	//����
	int age;
	//����
	int score;
}s3;//2.3������˳�㴴���ṹ�����





int main1()
{
	//2��ͨ��ѧ�������ʹ��������ѧ��
    //2.1 struct student s1
	//��������ʱstruct�ؼ��ֿ���ʡ��
	struct student s1;
	//ͨ����s1���Ը�ֵ��ͨ��.���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "������" << s1.name << "  ���䣺" << s1.age << "  ������" << s1.score << endl;

	//2.2 struct student s2 = {...}
	struct student s2 = { "����",19,80 };
	cout << "������" << s2.name << "  ���䣺" << s2.age << "  ������" << s2.score << endl;

	//2.3 ����ṹ��ʱ˳�㴴������
	s3.name = "����";
	s3.age = 22;
	s3.score = 300;
	cout << "������" << s3.name << "  ���䣺" << s3.age << "  ������" << s3.score << endl;

	system("pause");

	return 0;
}