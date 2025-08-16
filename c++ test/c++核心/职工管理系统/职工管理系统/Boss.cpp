#include"Boss.h"

//显示个人信息
void Boss::showInfo()
{
	cout << "职工编号：" << this->m_id
		<< "\t职工姓名：" << this->m_name
		<< "\t岗位：" << this->getDid()
		<< "\t岗位职责：完成公司所有事务" << endl;
}

//获取岗位信息
string Boss::getDid()
{
	return string("总裁");
}

Boss::Boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}