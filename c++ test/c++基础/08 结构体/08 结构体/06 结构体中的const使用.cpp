#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ḵ���µĸ����������õ�����һ��ָ����׵�ַ��32λ4�ֽڣ�64Ϊ8�ֽ�,�����ڵ��ṹ�����s���ݺܶ࣬ռ���ڴ���ʱ�򣬱��⸴��һģһ���ĸ���
//��ʹ�õ�ַ���� �βθı�ʵ��Ҳ�ı�
//���β�ǰ��const���Ա���ʵ�εĸı�
void printstudent(const struct student* s)
{
	//s->age = 150;//����const��һ�����޸ĵĲ����Ϳ��Ա���,��ֹ���ǵ������
	cout << "��ӡ��� ������" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
}

int main6()
{
	//�����ṹ�����
	struct student s = { "����",18,100 };

	//ͨ��������ӡ�ṹ���������Ϣ
	printstudent(&s);

	cout << "��main������������Ϊ��" << s.age << endl;

	system("pause");

	return 0;
}