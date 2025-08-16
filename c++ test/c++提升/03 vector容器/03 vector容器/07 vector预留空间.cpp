#include<iostream>
using namespace std;
#include<vector>

void test01()
{
	vector<int>v;
	int* p = nullptr;
	int num = 0;

	//预留空间减少动态扩展
	v.reserve(100000);

	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);//在不断循环插数中，会不断进行动态扩展
		//统计动态扩展次数
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