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
		tea[i].names = "��ʦ_";
		tea[i].names += seed[i];
		for (int j = 0; j < len; j++)
		{
			tea[i].stu[j].names = "ѧ��_";
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
	/*  ����������
		ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������

		���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա

		ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ

		���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
    */
    
	teachers tea[3];
	int len = sizeof(tea[3].stu) / sizeof(tea[3].stu[0]);
	cout << len << endl;

	fuzhi(tea,len);

	print(tea,len);

	system("pause");

	return 0;
}