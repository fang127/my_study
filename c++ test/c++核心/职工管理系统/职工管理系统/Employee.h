#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"worker.h"

//��ͨԱ����
class Employee : public Worker
{
public:
	//��ʾ������Ϣ
	void showInfo();
	
	//��ȡ��λ��Ϣ
	string getDid();

	//���캯��
	Employee(int id, string name, int did);
};
