#include"WorkerManager.h"
#include"Employee.h"
#include"Boss.h"
#include"Manager.h"

WorkerManager::WorkerManager()
{
	//cout << "WorkerManager的构造函数" << endl;

	//初始化三种情况
	//1、文件不存在
	ifstream ifs;
	ifs.open("FILENAME", ios::in);
	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;//测试代码
		//初始化属性
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化数组指针
		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();//关闭文件
		return;
	}

	//2、文件存在但数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空！" << endl;//测试代码
		//初始化属性
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化数组指针
		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();//关闭文件
		return;
	}

	//3、文件存在，并且有数据
	int num = this->get_EmpNum();
	//cout << "职工人数为：" << num << endl;//测试代码
	this->m_EmpNum = num;
	this->m_FileIsEmpty = false;

	this->m_EmpArray = new Worker * [this->m_EmpNum];//开辟空间
	this->init_Emp();//将文件中数据存入数组中

	//测试代码
// 	for (int i = 0; i < m_EmpNum; i++)
// 	{
// 		cout << "职工编号：" << this->m_EmpArray[i]->m_id
// 			 << "\t职工姓名：" << this->m_EmpArray[i]->m_name
// 			 << "\t岗位：" << this->m_EmpArray[i]->getDid() << endl; 
// 	}
}

WorkerManager::~WorkerManager()
{
	//cout << "WorkerManager的析构函数" << endl;
	if (this->m_EmpArray != NULL)
	{
		//删除堆区每个职工对象
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			delete this->m_EmpArray[i];
			this->m_EmpArray[i] = NULL;
		}

		//删除堆区数组指针
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

//展示菜单
void WorkerManager::Show_Menu()
{
	cout << "************************************" << endl;
	cout << "******* 欢迎进入职工管理系统 *******" << endl;
	cout << "********** 0.退出管理系统 **********" << endl;
	cout << "********** 1.增加职工信息 **********" << endl;
	cout << "********** 2.显示职工信息 **********" << endl;
	cout << "********** 3.删除离职职工 **********" << endl;
	cout << "********** 4.修改职工信息 **********" << endl;
	cout << "********** 5.查找职工信息 **********" << endl;
	cout << "********** 6.按照编号排序 **********" << endl;
	cout << "********** 7.清空所有文档 **********" << endl;
	cout << endl;
}

//退出系统
void WorkerManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);//退出程序函数
}

//添加职工
void WorkerManager::Add_Emp()
{
	cout << "请输入需要添加职工数量：" << endl;

	int addnum = 0;
	cin >> addnum;

	if (addnum > 0)
	{
		//添加
		//计算添加新空间大小
		int newsize = this->m_EmpNum + addnum;//新空间大小=原人数+新增人数

		//开辟新空间
		Worker** newspace = new Worker * [newsize];

		//将原空间下的数据拷贝到新空间下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0;i < this->m_EmpNum;i++)
			{
				newspace[i] = this->m_EmpArray[i];
			}
		}

		//批量添加新数据
		for (int i = 0; i < addnum; i++)
		{
			int id;
			string name;
			int did;

			cout << "请输入第" << i + 1 << "个新职工编号：" << endl;
			cin >> id;

			int ret = this->Isexist(id);//看编号id是否有人

			do 
			{
				if (ret != -1)
				{
					cout << "职工编号重复，请重新输入！" << endl;
					cin >> id;
					ret = this->Isexist(id);
				}
			} 
			while (ret != -1);//当没有重复跳出

			cout << "请输入第" << i + 1 << "个新职工姓名：" << endl;
			cin >> name;

			cout << "请输入第" << i + 1 << "个新职工岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> did;

			Worker* worker = NULL;
			switch (did)
			{
			case 1:
				worker = new Employee(id, name, did);
				break;

			case 2:
				worker = new Manager(id, name, did);
				break;

			case 3:
				worker = new Boss(id, name, did);
				break;

			default:
				break;
			}
			//将创建的职工指针，保存到数组中
			newspace[this->m_EmpNum + i] = worker;
		}

		//释放原有空间
		delete[] this->m_EmpArray;

		//更改新空间的指向
		this->m_EmpArray = newspace;

		//更新新职工人数
		this->m_EmpNum = newsize;

		//更新职工不为空标志
		this->m_FileIsEmpty = false;

		//提示添加成功
		cout << "成功添加" << addnum << "名新职工！" << endl;

		//保存数据
		this->save();
	}
	else
	{
		cout << "输入数量有误！" << endl;
	}

	system("pause");

	system("cls");
}

//保存文件
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open("FILENAME", ios::out);//用写的方式打开

	//将每个人的数据写入文件中
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_id
			<< "\t" << this->m_EmpArray[i]->m_name
			<< "\t" << this->m_EmpArray[i]->m_did << endl;
	}

	//关闭文件
	ofs.close();
}

//统计文件中人数
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open("FILENAME", ios::in);

	int id;
	string name;
	int did;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		//统计人数
		num++;
	}

	return num;
}

//初始化员工
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open("FILENAME", ios::in);

	int id;
	string name;
	int did;

	int index = 0;

	while (ifs >> id && ifs >> name && ifs >> did)
	{
		Worker* worker = NULL;
		if (did == 1)//普通员工
		{
			worker = new Employee(id, name, did);
		}
		else if (did == 2)//经理
		{
			worker = new Manager(id, name, did);
		}
		else //老板
		{
			worker = new Boss(id, name, did);
		}

		this->m_EmpArray[index] = worker;

		index++;
	}

	//关闭文件
	ifs.close();
}

//显示职工
void WorkerManager::show_Emp()
{
	//判断文件是否为空
	if (this->m_EmpNum <= 0)
	{
		cout << "系统记录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			//利用多态调用程序接口
			this->m_EmpArray[i]->showInfo();
		}
	}

	system("pause");
	system("cls");
}

//删除职工
void WorkerManager::Del_Emp()
{
	if (this->m_EmpNum <= 0)
	{
		cout << "系统记录为空！" << endl;
	}
	else
	{
		cout << "请输入想要删除的职工编号：" << endl;
		int id = 0;
		cin >> id;
		int index = this->Isexist(id);
		if (index != -1)//说明职工存在，并且要删除index位置上的职工
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				//delete this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];//数据前移
			}
			this->m_EmpNum--;//更新数组中记录人数
			//数据同步更新到文件中
			this->save();
			cout << "删除成功！" << endl;
		}
		else
		{
			cout << "删除失败，未找到该职工" << endl;
		}
	}

	system("pause");
	system("cls");
}

//判断职工是否存在
int WorkerManager::Isexist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_id == id)
		{
			//cout << "存在" << endl;
			index = i;
			break;
		}
	}

	return index;
}

//修改职工
void  WorkerManager::Mod_Emp()
{
	if (this->m_EmpNum <= 0)
	{
		cout << "记录为空！" << endl;
	}
	else
	{
		cout << "请输入要修改的职工编号" << endl;
		int id;
		cin >> id;

		int ret = this->Isexist(id);

		if (ret != -1)
		{
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newname = "";
			int newdid = 0;

			cout << "查到：" << id << "号职工,请输入新职工号：" << endl;
			cin >> newId;

			cout << "请输入新姓名：" << endl;
			cin >> newname;

			cout << "请输入岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、总裁" << endl;
			cin >> newdid;

			Worker* worker = NULL;
			switch (newdid)
			{
			case 1:
				worker = new Employee(newId, newname, newdid);
				break;
			case 2:
				worker = new Manager(newId, newname, newdid);
				break;
			case 3:
				worker = new Boss(newId, newname, newdid);
				break;
			}

			//更新数据保存数组中
			this->m_EmpArray[ret] = worker;

			cout << "修改成功！" << endl;

			//保存文件
			this->save();
		}
		else
		{
			cout << "修改失败，查无此人" << endl;
		}
	}
	system("pause");
	system("cls");
}

//查找职工 两种方法 姓名或编号
void WorkerManager::Find_Emp()
{
	if (this->m_EmpNum <= 0)
	{
		cout << "记录为空" << endl;
	}
	else
	{
		cout << "请输入查找的方式：" << endl;
		cout << "1、按职工编号查找" << endl;
		cout << "2、按职工姓名查找" << endl;
		int select = 0;
		cin >> select;

		if (select == 1)
		{
			//按编号查
			int id;
			cout << "请输入查找的职工编号：" << endl;
			cin >> id;

			int ret = this->Isexist(id);

			if (ret != -1)
			{
				//找到职工
				cout << "查找成功！该职工信息如下：" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		else if (select == 2)
		{
			//按姓名查
			string name;
			cout << "请输入查找的职工姓名：" << endl;
			cin >> name;

			//加入判断是否查到的标志
			bool flag = false;//默认未找到

			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_name == name)
				{
					cout << "查找成功！该职工信息如下：" << endl;
					this->m_EmpArray[i]->showInfo();

					flag = true;
				}
			}
			if (flag == false)
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		else 
		{
			cout << "输入有误！" << endl;
		}
	}
	system("pause");
	system("cls");
}

//排序职工
void WorkerManager::Sort_Emp()
{
	//安装职工编号排序
	if (this->m_EmpNum <= 0)
	{
		cout << "记录为空！" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式：" << endl;
		cout << "1、按职工编号进行升序" << endl;
		cout << "2、按职工编号进行降序" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int minOrmax = i;//声明最小值或最大值下标
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1)//升序
				{
					if (this->m_EmpArray[minOrmax]->m_id > this->m_EmpArray[j]->m_id)
					{
						minOrmax = j;
					}
				}
				else//降序
				{
					if (this->m_EmpArray[minOrmax]->m_id < this->m_EmpArray[j]->m_id)
					{
						minOrmax = j;
					}
				}
			}
			//判断一开始认定的最小值或者最大值是不是计算的最小或最大值，如果不是，交换数据
			if (i != minOrmax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrmax];
				this->m_EmpArray[minOrmax] = temp;
			}
		}
		cout << "排序成功！排序后的结果为：" << endl;
		this->save();
		this->show_Emp();
	}
}

//清空数据
void WorkerManager::Clean_File()
{
	cout << "确定清空？" << endl;
	cout << "1、确定" << endl;
	cout << "2、返回" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)//清空
	{
		ofstream ofs("FILENAME", ios::trunc);//删除文件后重新创建
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			//删除堆区每个职工对象
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}

			//删除堆区数组指针
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "清空成功" << endl;
	}

	system("pause");
	system("cls");
}