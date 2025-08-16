#include <iostream>
using namespace std;

struct students
{
	string names;
	int scores;
};

struct teachers
{
	string names;
	struct students stu[5];
};

void fuzhi(struct teachers tea[3], int len)
{
	string seed = "abcde";
	string seed2 = "12345";
	srand((unsigned int)time(NULL));
	for (int i = 0;i < 3;i++)
	{
		tea[i].names = "教师_";
		tea[i].names += seed[i];
		for (int j = 0; j < len; j++)
		{
			tea[i].stu[j].names = "学生_";
			tea[i].stu[j].names += seed2[j];
			int score = rand() % 41 + 60;
			tea[i].stu[j].scores = score;
		}

	}
}

void print(struct teachers tea[], int len)
{
	for (int i = 0; i < 3; i++)
	{
		cout << tea[i].names << endl;
		for (int j = 0; j < len; j++)
		{
			cout << tea[i].stu[j].names << "\t" << "score:" << tea[i].stu[j].scores << endl;
		}
		cout << endl;
	}
}

int main7()
{
	/*  案例描述：
		学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下

		设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

		学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

		最终打印出老师数据以及老师所带的学生数据。
    */
    
	teachers tea[3];
	int len = sizeof(tea[3].stu) / sizeof(tea[3].stu[0]);
	cout << len << endl;

	fuzhi(tea,len);

	print(tea,len);

	system("pause");

	return 0;
}