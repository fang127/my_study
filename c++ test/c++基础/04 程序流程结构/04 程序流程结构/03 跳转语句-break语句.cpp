#include <iostream>
using namespace std;

int main16()
{
	//breakʹ��ʱ��

	//1��������switch�����
	cout << "��ѡ�񸱱��Ѷ�" << endl;
	cout << "1����ͨ" << endl;
	cout << "2���е�" << endl;
	cout << "3������" << endl;

	int select = 0;
	cin >> select;

	switch (select)
	{
	case 1:
		cout << "��ѡ����Ѷ�Ϊ����ͨ" << endl;
		break;
	case 2:
		cout << "��ѡ����Ѷ�Ϊ���е�" << endl;
		break;
	case 3:
		cout << "��ѡ����Ѷ�Ϊ������" << endl;
		break;
	default:
		break;
	}

	//2��������ѭ�������
	for (int i = 0; i < 10; i++)
	{
		//���i����5���˳�ѭ�������ٴ�ӡ
		if (i == 5)
		{
			break; //�˳�ѭ��
		}
		cout << i << endl;
	}

	//3��������Ƕ��ѭ������� ���b����5���˳�ѭ�������ٴ�ӡ
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (b == 5)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}