/*#include <iostream>
using namespace std;

//打印数据函数
void showvalue(const int& val)
{
	cout << "val = " << val << endl;
	//val = 1000;//加上const后不可修改
	cout << "val = " << val << endl;
}

int main()
{
	//常量引用
	//使用场景：用来修饰形参，防止误操作

	int a = 10;
	//int& ref = 10;错误，引用必须引用一块合法的内存空间，只写一个10，是自变量，不可以直接引用
	const int& ref = 10;//加上const后，编译器将代码修改为 int temp = 10; const int &ref = temp;即编译器帮我们起了个别名，只是我们不知道
	//ref = 20;错误，加入const之后变成只读，不可以修改

	int b = 100;
	showvalue(b);
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}
*/
