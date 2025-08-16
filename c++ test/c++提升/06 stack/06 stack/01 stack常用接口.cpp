#include<iostream>
using namespace std;
#include<stack>

void test01()
{
	stack<int>stk;
	for (int i = 0; i < 10; i++)
	{
		stk.push(i);
	}
	stack<int>stk2(stk);
	cout << "stk size is " << stk.size() << endl;
	//只要栈不为空，查看栈顶，并且执行出栈操作
	while(!stk.empty())
	{
		//查看栈顶元素
		cout << stk.top() << " ";
		//出栈
		stk.pop();
	}
	cout << endl;
	cout << "stk size is " << stk.size() << endl;

	cout << "stk2 size is " << stk2.size() << endl;
	//只要栈不为空，查看栈顶，并且执行出栈操作
	while (!stk2.empty())
	{
		//查看栈顶元素
		cout << stk2.top() << " ";
		//出栈
		stk2.pop();
	}
	cout << endl;
	cout << "stk2 size is " << stk2.size() << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}