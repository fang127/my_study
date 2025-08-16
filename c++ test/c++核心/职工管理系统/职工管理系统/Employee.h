#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"worker.h"

//普通员工类
class Employee : public Worker
{
public:
	//显示个人信息
	void showInfo();
	
	//获取岗位信息
	string getDid();

	//构造函数
	Employee(int id, string name, int did);
};
