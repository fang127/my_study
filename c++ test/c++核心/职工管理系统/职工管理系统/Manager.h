#pragma once
#include <iostream>
using namespace std;
#include"worker.h"

//经理类
class Manager : public Worker
{
public:

	//显示个人信息
	void showInfo();

	//获取岗位信息
	string getDid();

	//构造函数
	Manager(int id, string name, int did);
};