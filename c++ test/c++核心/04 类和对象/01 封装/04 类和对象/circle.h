#pragma once
#include<iostream>
using namespace std;
#include"point.h"

class circle
{
private:
	point c_center;//Բ�� �����п�������һ������Ϊ�����еĳ�Ա
	int c_r;//Բ�뾶 
public:
	//����Բ��
	void setc_center(point center);

	//��ȡԲ��
	point getc_center();

	//���ð뾶
	void setc_r(int r);

	//��ȡ�뾶
	int getc_r();
	
};
