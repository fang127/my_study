#include <iostream>
using namespace std;

int main13()
{
	//������������1��ʼ��������100��������ָ�λ����7����������ʮλ����7�����߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ���
	//1����ӡ����1-100
	//2���ҵ����ֵĸ�λ��ʮλ����
	//3���ж��Ƿ�������
	for (int num = 1; num <= 100; num++)
	{
		int a = num % 10; //��λ
		int b = num / 10; //ʮλ
		int c = 0;
		c = num % 7;
		if (a == 7 || b == 7 || c == 0)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}

	system("pause");

	return 0;
}