#include <iostream>
using namespace std;

//����ӷ�����
//���������ʱ��num1��num2��û��ʵ�ʵ�ֵ������ֻ��һ����ʽ�ϵĲ���������βΣ�ֻ���ڵ��õ�ʱ��Ż��ʵ�δ��ݸ���
int add2(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main2()
{
	//main�����е���add����
	int a = 10;
	int b = 20;

	//�������õ��﷨ �������ƣ�������
	//a��b��Ϊʵ�ʲ��������ʵ��
	//�����ú�����ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
	int c = add2(a, b);

	cout << "c = " << c << endl;

	a = 100;
	b = 500;
	c = add2(a, b);
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}