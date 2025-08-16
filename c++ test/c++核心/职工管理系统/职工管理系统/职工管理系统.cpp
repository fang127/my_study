#include<iostream>
using namespace std;
#include"workerManager.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"

int main()
{
	WorkerManager wm;

	//测试代码员工
// 	Worker* worker = new Employee(1, "张三", 1);
// 	worker->showInfo();
// 	delete worker;
// 	exit(0);
// 
// 	//测试代码经理
// 	Worker* worker1 = new Manager(2, "李四", 2);
// 	worker1->showInfo();
// 	delete worker1;
// 	exit(0);
// 
// 	//测试代码老板
// 	Worker* worker2 = new Boss(3, "王五", 3);
// 	worker2->showInfo();
// 	delete worker2;
// 	exit(0);
	
	//退出功能
	int choice = 0;//

	while (true)
	{
		//展示菜单
		wm.Show_Menu();
		cin >> choice;
		switch (choice)
		{
		case 0://退出系统	
			//cout << "欢迎下次使用！" << endl;
			//return 0;面向过程 要熟练C++面向对象，用成员函数创建
			wm.exitSystem();
			break;
		case 1://增加职工信息
			wm.Add_Emp();
			break;
		case 2://显示职工信息
			wm.show_Emp();
			break;
		case 3://删除离职职工
			wm.Del_Emp();
			break;
		case 4://修改职工信息
			wm.Mod_Emp();
			break;
		case 5://查找职工信息
			wm.Find_Emp();
			break;
		case 6://按照编号排序
			wm.Sort_Emp();
			break;
		case 7://清空所有文档
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