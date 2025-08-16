#include <iostream>
using namespace std;

//结构体数组
//1、定义结构体
struct student
{
	string name;
	int age;
	int score;
};

int main2()
{
	//2、创建结构体数组
	struct student stuarray[3] =
	{
		{"张三",18,30},
		{"李四",20,43},
		{"王五",14,90}
	};
	cout << (int)stuarray << endl;//结构体数组名称为内存首地址
	//3、给结构数组中的元素赋值
	stuarray[2].name = "赵六";
	stuarray[2].age = 80;
	stuarray[2].score = 10;

	//4、遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuarray[i].name << "  年龄：" << stuarray[i].age << "  分数：" << stuarray[i].score << endl;
	}

	system("pause");

	return 0;
}