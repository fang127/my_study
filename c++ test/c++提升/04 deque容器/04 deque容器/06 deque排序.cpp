#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>//标准算法头文件

void printDeque(int val)
{
	cout << val << " ";
}

void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	cout << "排序前：" << endl;
	for_each(d.begin(), d.end(), printDeque);
	cout << endl;

	//排序
	//对于支持随机访问的迭代器的容器，都可以利用sort算法进行排序，vector也可以
	//sort默认排序规则 从小到大 升序
	cout << "排序后：" << endl;
	sort(d.begin(), d.end());
	for_each(d.begin(), d.end(), printDeque);
	cout << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}