#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针，可以减少内存空间，不会复制新的副本出来，得到的是一个指针的首地址，32位4字节，64为8字节,可用于当结构体变量s内容很多，占用内存大的时候，避免复制一模一样的副本
//但使用地址传递 形参改变实参也改变
//在形参前加const可以避免实参的改变
void printstudent(const struct student* s)
{
	//s->age = 150;//加入const后，一旦有修改的操作就可以报错,防止我们的误操作
	cout << "打印结果 姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
}

int main6()
{
	//创建结构体变量
	struct student s = { "张三",18,100 };

	//通过函数打印结构体变量的信息
	printstudent(&s);

	cout << "在main中张三的年龄为：" << s.age << endl;

	system("pause");

	return 0;
}