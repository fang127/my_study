#pragma once//防止头文件重复包含
#include<iostream>//包含输入输出流头文件
using namespace std;//使用标准命名空间
#include"worker.h"
#include<fstream>
#define FILENAME "empFile.txt"

//管理类声明  所有操作在管理类调用
class WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//退出系统
	void exitSystem();

	//添加职工
	void Add_Emp();

	//保存文件
	void save();

	//统计文件中人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void show_Emp();

	//删除职工
	void Del_Emp();

	//判断职工是否存在
	int Isexist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工 两种方法 姓名或编号
	void Find_Emp();

	//排序职工
	void Sort_Emp();

	//清空数据
	void Clean_File();

	//析构函数
	~WorkerManager();

	//记录职工人数
	int m_EmpNum;

	//记录职工数组指针 指向指针的数组指针
	Worker** m_EmpArray;

	//标志文件是否为空
	bool m_FileIsEmpty;
};