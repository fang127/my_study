#pragma once
#include<iostream>
using namespace std;
#include"worker.h"

class Boss : public Worker
{
public:

	//��ʾ������Ϣ
	void showInfo();

	//��ȡ��λ��Ϣ
	string getDid();

	Boss(int m_id,string m_name,int m_did);
};
