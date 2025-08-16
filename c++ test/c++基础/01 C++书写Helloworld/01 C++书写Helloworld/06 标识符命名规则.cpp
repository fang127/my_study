#include <iostream>
using namespace std;

//标识符命名规则
/*1、标识符不可以是关键字
  2、标识符是有字母、数字、下划线构成的
  3、第一个字符不可以是数字，只能是字母或下划线
  4、标识符中字母是区分大小写的*/

int main()
{
	//1、标识符不可以是关键字
	//int int = 10;

	//2、标识符是有字母、数字、下划线构成的
	int abc = 10;
	int _abc = 20;
	int _123abc = 30;
	
	//3、第一个字符不可以是数字，只能是字母或下划线
	//int 123abc = 40;

	//4、标识符中字母是区分大小写的
	int aaa = 100;

	cout << "aaa=" << aaa << endl;
	
	//cout << AAA << endl;
	
	//建议：给变量起名的时候，最好做的见名识意
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	cout << "sum=" << sum << endl;

	system("pause");

	return 0;
}