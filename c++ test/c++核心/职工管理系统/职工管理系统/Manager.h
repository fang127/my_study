#pragma once
#include <iostream>
using namespace std;
#include"worker.h"

//������
class Manager : public Worker
{
public:

	//��ʾ������Ϣ
	void showInfo();

	//��ȡ��λ��Ϣ
	string getDid();

	//���캯��
	Manager(int id, string name, int did);
};