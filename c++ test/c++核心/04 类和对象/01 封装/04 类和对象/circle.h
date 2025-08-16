#pragma once
#include<iostream>
using namespace std;
#include"point.h"

class circle
{
private:
	point c_center;//圆心 在类中可以让另一个类作为本类中的成员
	int c_r;//圆半径 
public:
	//设置圆心
	void setc_center(point center);

	//获取圆心
	point getc_center();

	//设置半径
	void setc_r(int r);

	//获取半径
	int getc_r();
	
};
