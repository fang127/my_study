#include <iostream>
using namespace std;

int main7()
{
	//switch���
	//����Ӱ���
	//10~9 ����
	//8~7 �ǳ���
	//6~5 һ��
	//5���� ��Ƭ

	//1����ʾ�û�����Ӱ����
	cout << "�����Ӱ���д��" << endl;

	//2���û���ʼ���
	int score = 0;
	cin >> score;
	cout << "�����˵�Ӱ��ķ���Ϊ��" << score << endl;

	//3�������û�����ķ�����ʾ�û����Ľ��
	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ��" << endl;
		break; //�����˳���ǰ��֧���������ִ������case����.��case������治��break����ô�����һֱ����ִ�С�
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ��" << endl;
		break;
	case 8:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ��" << endl;
		break;
	case 7:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ��" << endl;
		break;
	case 6:
		cout << "����Ϊ��һ��ĵ�Ӱ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��һ��ĵ�Ӱ��" << endl;
		break;
	default:
		cout << "����Ϊ����Ƭ��" << endl;
		break;
	}

	//if��switch������
	//switchȱ�������жϵ�ʱ��ֻ�������ͻ����ַ��ͣ���������һ������
	//switch�ŵ��ǽṹ������ִ��Ч�ʸ�

	system("pause");

	return 0;
}