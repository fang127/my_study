#include <iostream>
using namespace std;

//��������д��main���棬�޷����У���Ϊ˳��ṹ
//����ͨ��������������������ǰ���߱����������Ĵ��ڣ�����vs�µ�İ汾���Բ�������Ҳ���Ե��ã�����vs2022
int max(int a, int b); //����������
//��������������д��Σ�������ֻ����һ��
// int max(int a, int b);
// int max(int a, int b);
// int max(int a, int b);

int main5()
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ

int max(int a, int b)
{
	return a > b ? a : b;
	// 	if (a > b)
	// 	{
	// 		cout << "�����Ϊa = " << a << endl;
	// 	}
	// 	else if (a == b)
	// 	{
	// 		cout << "a��bһ����a = b =" << a << endl;
	// 	}
	// 	else
	// 	{
	// 		cout << "�����Ϊb = " << b << endl;
	// 	}
}