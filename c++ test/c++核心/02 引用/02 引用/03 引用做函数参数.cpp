/*#include <iostream>
using namespace std;

//��������
//1��ֵ����
void myswap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap a = " << a << endl;
	cout << "swap b = " << b << endl;
}

//2����ַ����
void myswap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "swap02 a = " << *a << endl;
	cout << "swap02 b = " << *b << endl;
}

//3�����ô���
void myswap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap03 a = " << a << endl;
	cout << "swap03 b = " << b << endl;
}

int main()
{
	int a = 10;
	int b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	myswap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	myswap02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	myswap03(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
};
*/