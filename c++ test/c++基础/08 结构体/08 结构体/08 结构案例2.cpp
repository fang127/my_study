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
			heroarray[i].xingbie = "��";
		}
		else
		{
			heroarray[i].xingbie = "Ů";
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
	cout << "Ӣ�۰���������������Ľ��Ϊ��" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroarray[i].name << "  ���䣺" << heroarray[i].age << "�Ա�" << heroarray[i].xingbie << endl;
	}
}

int main()
{
	//�������������һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;�����ṹ�����飬�����д��5��Ӣ�ۡ�
	//ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
	srand((unsigned int)time(NULL));

	struct heros heroarray[5];

	int len = sizeof(heroarray) / sizeof(heroarray[0]);

	allocateheros(heroarray,len);

	cout << "����ǰ�Ľ��Ϊ��" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroarray[i].name << "  ���䣺" << heroarray[i].age << "�Ա�" << heroarray[i].xingbie << endl;
	}

	hubble(heroarray,len);

	print(heroarray,len);

	system("pause");

	return 0;
}