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
	//ֻҪջ��Ϊ�գ��鿴ջ��������ִ�г�ջ����
	while(!stk.empty())
	{
		//�鿴ջ��Ԫ��
		cout << stk.top() << " ";
		//��ջ
		stk.pop();
	}
	cout << endl;
	cout << "stk size is " << stk.size() << endl;

	cout << "stk2 size is " << stk2.size() << endl;
	//ֻҪջ��Ϊ�գ��鿴ջ��������ִ�г�ջ����
	while (!stk2.empty())
	{
		//�鿴ջ��Ԫ��
		cout << stk2.top() << " ";
		//��ջ
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