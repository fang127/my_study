#include <iostream>
using namespace std;

int main5()
{
	//1、const修饰指针
	int a = 10;
	int b = 20;

	const int* p = &a;//指针指向的值不可以改，但指针指向可以改
	//*p = 20;//错误
	p = &b;//正确

	//2、const修饰常量
	int* const p2 = &a;//指针指向的值可以改，但指针指向不可以改
	*p2 = 20;//正确
	//p2 = &b;//错误

	//3、都修饰
	const int* const p3 = &a;//指针指向的值和指针指向都不可以改
	//*p3 = 20;//错误
	//p3 = &b;//错误

	system("pause");

	return 0;
}