#include <iostream>
using namespace std;

//�����Ķ��巽ʽ
//1��#define �곣��
//2��const���εı���

//1��#define �곣��
#define Day 7 //�곣��ͨ���������ļ��Ϸ�

int main4()
{ 

	//Day = 14; //����Day�ǳ�����һ���޸ľͻ����
	cout << "һ���ܹ��У�" << Day << "��" << endl;


	//2��consy���εı���
	const int month = 12;
	//month = 24; //����const���εı���Ҳ��Ϊ������һ���޸ľͻ����
	
	cout << "һ���ܹ���:" << month << "��" << endl;

	system("pause");

	return 0;
}