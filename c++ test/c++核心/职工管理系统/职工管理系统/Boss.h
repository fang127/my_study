#pragma once
#include<iostream>
using namespace std;
#include"worker.h"

class Boss : public Worker
{
public:

	//显示个人信息
	void showInfo();

	//获取岗位信息
	string getDid();

	Boss(int m_id,string m_name,int m_did);
};
