#include<iostream>
using namespace std;
#include<vector>

void test01()
{
	vector<int>v;
	int* p = nullptr;
	int num = 0;

	//Ԥ���ռ���ٶ�̬��չ
	v.reserve(100000);

	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);//�ڲ���ѭ�������У��᲻�Ͻ��ж�̬��չ
		//ͳ�ƶ�̬��չ����
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}