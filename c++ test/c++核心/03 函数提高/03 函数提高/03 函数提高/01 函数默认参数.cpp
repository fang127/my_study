/*#include <iostream>
using namespace std;

//����Ĭ�ϲ���
int func(int a, int b,int c)
{
	return a + b + c;
}

int func02(int a = 20, int b = 20, int c = 30)
{
	return a + b + c;
}

//ע������
//���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴������Ҷ�����Ҫ��Ĭ��ֵ
//int func03(int a, int b = 10, int c)
//{
	//return a + b + c;
//}

//2���������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//*������ʵ��ֻ����һ��Ĭ�ϲ���
int func03(int a = 10, int b = 10);//��������

int func03(int a = 10, int b = 10)//�������¶�����Ĭ�ϲ�����������
{
	return a + b;
}


int main()
{
	cout << func(10, 20, 30) << endl;
	
	cout << func02() << endl;//���������Ĭ��ֵ�����Բ�����ʵ�Σ�����ʹ��Ĭ��ֵ

	cout << func02(30) << endl;//����Լ��������ݣ������Լ���ʵ�����ݣ�
	cout << func02(20, 30) << endl;

	//cout << func03(10, 10) << endl;

	system("pause");

	return 0;
}
*/