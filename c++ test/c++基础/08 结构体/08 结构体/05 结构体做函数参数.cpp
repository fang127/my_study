#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

//��ӡѧ���ĺ���
//1��ֵ����
void printstudent1(struct student s1)
{
	s1.age = 100;//ֵ�����βθı䲻Ӱ��ʵ��
	cout << "�Ӻ�����ֵ���ݣ��д�ӡ��� ������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;
}

//2����ַ����
void printstudent2(struct student* p)
{
	p->age = 200;//��ַ�����βθı� ʵ��Ҳ�ı�
	cout << "�Ӻ�������ַ���ݣ��д�ӡ��� ������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}

int main5()
{
	//���ṹ������������
	//��ѧ������һ�������У���ӡѧ�����ϵ�������Ϣ
	struct student s1 = { "����",18,100 };

	cout << "��main�����еĴ�ӡ�����" << s1.name << " ���䣺"  << s1.age << " ������" << s1.score << endl;

	printstudent1(s1);
	printstudent2(&s1);

	system("pause");

	return 0;
}