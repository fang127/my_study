#include <iostream>
using namespace std;

struct heros
{
	string name;
	int age;
	string xingbie;
};

void allocateheros(struct heros heroarray[],int len)
{
	for (int i = 0; i < len; i++)
	{
		string seed = "ABCED";
		heroarray[i].name = "hero_";
		heroarray[i].name += seed[i];
		int ageseed = rand() % 100 + 1;
		heroarray[i].age = ageseed;
		int xingbieseed = rand() % 100 + 1;
		int a = xingbieseed > 50 ? 1 : 0;
		if (a == 1)
		{
			heroarray[i].xingbie = "男";
		}
		else
		{
			heroarray[i].xingbie = "女";
		}
	}
}

void hubble(struct heros heroarray[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroarray[j].age > heroarray[j + 1].age)
			{
				struct heros temp = heroarray[j];
				heroarray[j] = heroarray[j + 1];
				heroarray[j + 1] = temp;
			}
		}
	}

}

void print(struct heros heroarray[], int len)
{
	cout << "英雄按照年龄进行升序后的结果为：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << heroarray[i].name << "  年龄：" << heroarray[i].age << "性别：" << heroarray[i].xingbie << endl;
	}
}

int main()
{
	//案例描述：设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。
	//通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
	srand((unsigned int)time(NULL));

	struct heros heroarray[5];

	int len = sizeof(heroarray) / sizeof(heroarray[0]);

	allocateheros(heroarray,len);

	cout << "排序前的结果为：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << heroarray[i].name << "  年龄：" << heroarray[i].age << "性别：" << heroarray[i].xingbie << endl;
	}

	hubble(heroarray,len);

	print(heroarray,len);

	system("pause");

	return 0;
}