#include <iostream>
using namespace std;

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap�е�a = " << a << endl;
	cout << "swap�е�b = " << b << endl;
}

void swap02(int* p1,int* p2)
{
	int temp2 = *p1;
	*p1 = *p2;
	*p2 = temp2;
}

int main7()
{
	//ָ��ͺ���

	//1��ֵ����
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//2����ַ����
	//����ǵ�ַ���ݣ������޸�ʵ��
	swap02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}