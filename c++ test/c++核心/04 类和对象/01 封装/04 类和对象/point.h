#pragma once
#include<iostream>
using namespace std;

class point
{
private:
	int p_m;//��x����
	int p_n;//��y����
public:
	//����m
	void setp_m(int m);

	//��ȡm
	int getp_m();

	//����n
	void setp_n(int n);

	//��ȡx
	int getp_n();
	
};
