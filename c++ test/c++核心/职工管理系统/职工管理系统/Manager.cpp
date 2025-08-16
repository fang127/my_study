#include"Manager.h"

//显示个人信息
void Manager::showInfo()
{
	cout << "职工编号：" << this->m_id
		 << "\t职工姓名：" << this->m_name
		 << "\t岗位：" << this->getDid()
		 << "\t岗位职责：完成老板安排的任务，并且将任务分派给员工" << endl;
}

//获取岗位信息
string Manager::getDid()
{
	return string("经理");
}

//构造函数
Manager::Manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}