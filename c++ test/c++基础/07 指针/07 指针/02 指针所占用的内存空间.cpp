#include <iostream>
using namespace std;

int main2()
{
	//ָ����ռ���ڴ�ռ��С
	int a = 10;
	int* p = &a;

	//32Ϊ����ϵͳ�£���x86��ָ��ռ4�ֽڿռ��С������ʲô�������ͣ���Ϊ����������ڴ��ַ
	//64Ϊ����ϵͳ�£���x64��ָ��ռ8�ֽڿռ��С������ʲô�������ͣ���Ϊ����������ڴ��ַ
	cout << "sizeof(int *) = " << sizeof(int*) << endl;
	cout << "sizeof(float *) = " << sizeof(float*) << endl;
	cout << "sizeof(double *) = " << sizeof(double*) << endl;
	cout << "sizeof(char *) = " << sizeof(char*) << endl;
	cout << "sizeof(string *) = " << sizeof(string*) << endl;
	cout << "ָ��pռ�õ��ڴ�ռ��СΪ��" << sizeof(p) << endl;

	system("pause");

	return 0;
}