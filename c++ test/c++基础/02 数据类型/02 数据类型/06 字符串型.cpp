#include <iostream>
using namespace std;
#include <string> //用c++风格字符串时候，要包含这个头文件，新版本vs不需要

int main6()
{
	//1、c风格字符串
	//注意事项  char字符串名 []    等号后面要用双引号包含起来字符串
	char str[] = "hello world";
	cout << str << endl;

	//2、c++风格字符串
	string str2 = "hello world";
	cout << str2 << endl;
	system("pause");

	return 0;
}