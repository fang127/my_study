#include <iostream>
using namespace std;

int main5()
{
	//1��const����ָ��
	int a = 10;
	int b = 20;

	const int* p = &a;//ָ��ָ���ֵ�����Ըģ���ָ��ָ����Ը�
	//*p = 20;//����
	p = &b;//��ȷ

	//2��const���γ���
	int* const p2 = &a;//ָ��ָ���ֵ���Ըģ���ָ��ָ�򲻿��Ը�
	*p2 = 20;//��ȷ
	//p2 = &b;//����

	//3��������
	const int* const p3 = &a;//ָ��ָ���ֵ��ָ��ָ�򶼲����Ը�
	//*p3 = 20;//����
	//p3 = &b;//����

	system("pause");

	return 0;
}