#include<iostream>
using namespace std;
#include"speechManager.h"
#include<algorithm>

int main()
{
	srand((unsigned int)time(nullptr));
	speechManager speechmanager;
	int choice = 0;

	//����12��ѡ�ִ���
// 	for (map<int, Speaker>::iterator it 
// 		= speechmanager.m_Speaker.begin(); it != speechmanager.m_Speaker.end(); it++)
// 	{
// 		it->second.printspeaker();
// 	}

	while (1)
	{
		speechmanager.show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;//�û�����
		switch (choice)
		{
		case 0://�˳�ϵͳ2
			speechmanager.exitSystem();
			break;
		case 1://��ʼ����
			speechmanager.startMatch();
			break;
		case 2://�鿴���������¼
			speechmanager.showRecord();
			break;
		case 3://��ձ�����¼
			speechmanager.clearRecord();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}