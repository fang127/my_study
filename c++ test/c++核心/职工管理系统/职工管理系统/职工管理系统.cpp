#include<iostream>
using namespace std;
#include"workerManager.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"

int main()
{
	WorkerManager wm;

	//���Դ���Ա��
// 	Worker* worker = new Employee(1, "����", 1);
// 	worker->showInfo();
// 	delete worker;
// 	exit(0);
// 
// 	//���Դ��뾭��
// 	Worker* worker1 = new Manager(2, "����", 2);
// 	worker1->showInfo();
// 	delete worker1;
// 	exit(0);
// 
// 	//���Դ����ϰ�
// 	Worker* worker2 = new Boss(3, "����", 3);
// 	worker2->showInfo();
// 	delete worker2;
// 	exit(0);
	
	//�˳�����
	int choice = 0;//

	while (true)
	{
		//չʾ�˵�
		wm.Show_Menu();
		cin >> choice;
		switch (choice)
		{
		case 0://�˳�ϵͳ	
			//cout << "��ӭ�´�ʹ�ã�" << endl;
			//return 0;������� Ҫ����C++��������ó�Ա��������
			wm.exitSystem();
			break;
		case 1://����ְ����Ϣ
			wm.Add_Emp();
			break;
		case 2://��ʾְ����Ϣ
			wm.show_Emp();
			break;
		case 3://ɾ����ְְ��
			wm.Del_Emp();
			break;
		case 4://�޸�ְ����Ϣ
			wm.Mod_Emp();
			break;
		case 5://����ְ����Ϣ
			wm.Find_Emp();
			break;
		case 6://���ձ������
			wm.Sort_Emp();
			break;
		case 7://��������ĵ�
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}