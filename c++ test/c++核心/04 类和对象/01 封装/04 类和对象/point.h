#pragma once
#include<iostream>
using namespace std;

class point
{
private:
	int p_m;//点x坐标
	int p_n;//点y坐标
public:
	//设置m
	void setp_m(int m);

	//获取m
	int getp_m();

	//设置n
	void setp_n(int n);

	//获取x
	int getp_n();
	
};
