#pragma once
#include<iostream>
using namespace std;
#include<string>

//职工抽象类
class Worker
{
public:
	//显示个人信息
	virtual void showInfo() = 0;

	//获取岗位信息
	virtual string getDid() = 0;

	int m_id;

	string m_name;

	int m_did;
};
