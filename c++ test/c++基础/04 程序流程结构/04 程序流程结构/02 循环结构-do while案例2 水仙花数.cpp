#include <iostream>
using namespace std;

int main11()
{
	//����������ˮ�ɻ�����ָһ����λ��������ÿ��λ�ϵ����ֵ�3����֮�͵���������
	//���磺1^3+5^3+3^3=153
	//������do...while��䣬�������3λ���е�ˮ�ɻ���
	int a = 0;
	int b = 0;
	int c = 0;
	int num = 100;
	//num = a * 100 + b * 10 + c * 1;

// 	a = num % 10;
// 	b = (num / 10) % 10;
// 	c = num / 100;
// 
// 	cout << a << b << c << endl;
	//1����ӡ������λ��
	do 
	{
		//2�������ˮ�ɻ������ӡ
		a = num % 10;
		b = (num / 10) % 10;
		c = num / 100;
		if (a * a * a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}
		num++;
	} 
	while (num < 1000);

	system("pause");

	return 0;
}