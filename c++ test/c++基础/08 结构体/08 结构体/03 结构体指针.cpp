#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

int main3()
{
	//1、创建学生结构体变量
	struct student s1 = { "张三",18,100 };

	//2、通过指针指向结构体变量
	//int* p = &s1;//指针不兼容，错误
	struct student* p = &s1;

	//3、通过指针访问结构体变量中的数据
	//通过结构体指针访问结构体中的属性，需要利用->
	cout << "姓名：" << p->name << "  年龄：" << p->age << "  分数：" << p->score << endl;

	system("pause");

	return 0;
}