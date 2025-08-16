#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include"Person.h"
#include"createPerson.h"
#include"setScore.h"

//案例描述
//有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。

//实现步骤
// 1. 创建五名选手，放到vector中
// 2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
// 3. sort算法对deque容器中分数排序，去除最高和最低分
// 4. deque容器遍历一遍，累加总分
// 5. 获取平均分

int main()
{
	//1.创建五名选手
	vector<Person>v;
	createPerson(v);

	//2.给选手打分
	setScore(v);

	//3.显示得分
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		it->printPerson();
	}

	system("pause");

	return 0;
}