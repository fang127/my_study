/*#include <iostream>
using namespace std;

void func(int& ref)//���������ã�ת��Ϊint* const ref = &a;
{
	ref = 100;//ref�����ã�ת��δ*ref = 100��
}

int main()
{
	int a = 10;

	//�Զ�ת��Ϊ int* const ref = &a;ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
	int& ref = a;
	ref = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ*ref = 20�������ø�ֵ

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	func(a);

	system("pause");

	return 0;
}
*/