#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include"Person.h"
#include"createPerson.h"
#include"setScore.h"

//��������
//��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ���֡�

//ʵ�ֲ���
// 1. ��������ѡ�֣��ŵ�vector��
// 2. ����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
// 3. sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
// 4. deque��������һ�飬�ۼ��ܷ�
// 5. ��ȡƽ����

int main()
{
	//1.��������ѡ��
	vector<Person>v;
	createPerson(v);

	//2.��ѡ�ִ��
	setScore(v);

	//3.��ʾ�÷�
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		it->printPerson();
	}

	system("pause");

	return 0;
}