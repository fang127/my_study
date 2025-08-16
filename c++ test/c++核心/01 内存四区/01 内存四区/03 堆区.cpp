/*#include <iostream>
using namespace std;

int* func()
{
	//利用new关键字，可以将数据开辟到堆区，但其返回的是堆区的地址，不是具体的值，需要用指针接收
	//指针 本质也是局部变量，放在栈上，指针保存的数据是放在堆区的
	int* p = new int(10);//栈区中指针p保存的是定义的堆区10的地址，所以在函数运行结束，栈区释放，但堆区中的10未释放
	return p;

// 	int a = 10;
// 	return &a;
}

int main()
{
	//在堆区开辟数据
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;


	system("pause");

	return 0;
}*/