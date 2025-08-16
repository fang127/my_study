#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

//打印学生的函数
//1、值传递
void printstudent1(struct student s1)
{
	s1.age = 100;//值传递形参改变不影响实参
	cout << "子函数（值传递）中打印结果 姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
}

//2、地址传递
void printstudent2(struct student* p)
{
	p->age = 200;//地址传递形参改变 实参也改变
	cout << "子函数（地址传递）中打印结果 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}

int main5()
{
	//将结构体做函数参数
	//将学生传入一个参数中，打印学生身上的所有信息
	struct student s1 = { "张三",18,100 };

	cout << "在main函数中的打印结果：" << s1.name << " 年龄："  << s1.age << " 分数：" << s1.score << endl;

	printstudent1(s1);
	printstudent2(&s1);

	system("pause");

	return 0;
}