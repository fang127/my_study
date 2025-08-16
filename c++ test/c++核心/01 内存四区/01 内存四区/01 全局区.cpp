/*#include <iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

//const修饰的全局变量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
	//全局区

	//全局变量 静态变量 常量

	//创建普通局部变量
	int a = 10;//局部变量 （创建在函数体内的变量叫局部变量）
	int b = 10;

	cout << "局部变量a的地址为：" << (long long)&a << endl;
	cout << "局部变量b的地址为：" << (long long)&b << endl;

	cout << "全局变量g_a的地址为：" << (long long)&g_a << endl;
	cout << "全局变量g_b的地址为：" << (long long)&g_b << endl;//可以看到全局变量和局部变量的内存地址相差很多
	

	//静态变量 在普通变量前面加static，属于静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址为：" << (long long)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (long long)&s_b << endl;//可以看到静态变量和全局变量位置很近

	//常量
	//字符串常量
	cout << "字符串常量的地址为：" << (long long)&"hello world" << endl;//可以看到字符串常量地址与局部变量相差很大，和全局变量和静态变量相差有一点，但不多，都在全局区内

	//const修饰的变量
	//const修饰的全局变量，const修饰的局部变量
	cout << "const修饰的全局变量,即全局常量的地址为：" << (long long)&c_g_a << endl;
	cout << "const修饰的全局变量,即全局常量的地址为：" << (long long)&c_g_b << endl;//可以看到全局常量地址与局部变量相差很大，和全局变量和静态变量以及字符串常量相差有一点，但不多，都在全局区内

	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "const修饰的局部变量,即局部常量的地址为：" << (long long)&c_l_a << endl;
	cout << "const修饰的局部变量,即局部常量的地址为：" << (long long)&c_l_b << endl;//局部常量不在全局区

	//结论：全局区中存放全局变量、静态变量
	//全局区还包括常量区，存放字符串常量、const修饰的全局变量（全局常量）
	//局部变量、const修饰的局部变量（局部常量）不在全局区

	system("pause");

	return 0;
}*/