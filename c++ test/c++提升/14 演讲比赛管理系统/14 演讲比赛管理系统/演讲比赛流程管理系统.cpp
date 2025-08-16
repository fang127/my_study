#include<iostream>
using namespace std;
#include"speechManager.h"
#include<algorithm>

int main()
{
	srand((unsigned int)time(nullptr));
	speechManager speechmanager;
	int choice = 0;

	//测试12名选手创建
// 	for (map<int, Speaker>::iterator it 
// 		= speechmanager.m_Speaker.begin(); it != speechmanager.m_Speaker.end(); it++)
// 	{
// 		it->second.printspeaker();
// 	}

	while (1)
	{
		speechmanager.show_Menu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;//用户输入
		switch (choice)
		{
		case 0://退出系统2
			speechmanager.exitSystem();
			break;
		case 1://开始比赛
			speechmanager.startMatch();
			break;
		case 2://查看往届比赛记录
			speechmanager.showRecord();
			break;
		case 3://清空比赛记录
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