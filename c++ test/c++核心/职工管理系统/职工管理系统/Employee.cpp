#include"Employee.h"

//显示个人信息
void Employee::showInfo()
{
	cout << "职工编号：" << this->m_id 
		 << "\t职工姓名：" << this->m_name
		 << "\t岗位：" << this->getDid() 
		 << "\t岗位职责：完成经理安排的任务" << endl;
}

//获取岗位信息
string Employee::getDid()
{
	return string("员工");
}

//构造函数
Employee::Employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}