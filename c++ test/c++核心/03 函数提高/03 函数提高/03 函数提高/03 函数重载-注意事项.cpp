/*#include <iostream>
using namespace std;

//�������ص�ע������
//1��������Ϊ���ص�����
void func(int &a)
{
	cout << "func(int &a)����" << endl;
}

void func(const int &a)//const int��int���Ͳ�ͬ����������
{
	cout << "func(const int &a)����" << endl;
}

//2��������������Ĭ�ϲ���
void func2(int a,int b = 10)
{
	cout << "func2(int a,int b = 10)�ĵ���" << endl;
}

void func2(int a)
{
	cout << "func2(int a)�ĵ���" << endl;
}

int main()
{
	int a = 10;//aΪ�������ɶ���д
	func(a);//�����ߵ���func��int &a��
	func(10);//�������fun��int &a��,��Ϊ��int &a = 10;���Ϸ������ñ����ʼ���������func(const int &a)����const int &a = 10,�Ϸ���ϵͳ���˸�temp��ʱ�ռ���Ϊ10��Ȼ�����ø�temp��ֻ�����ǲ�֪��temp��������
	//func2(10);//��������������Ĭ�ϲ��������ֶ����ԣ���������
	func2(10,20);

	system("pause");

	return 0;
}
*/