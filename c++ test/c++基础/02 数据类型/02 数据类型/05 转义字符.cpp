#include <iostream>
using namespace std;


int main5()
{
	//转义字符

	//换行符 \n
	cout << "hello world" << endl;
	cout << "hello world\n";

	//反斜杠 \\
	
	cout << "\\" << endl;

	//水平制表符 \t 作用：整齐输出数据
	cout << "aaa\thelloworld" << endl;//"aaa\t"共8个字符，看怎么分配，3个a的话就有5个空格，4个a就有4个空格
	cout << "a\thelloworld" << endl;
	cout << "aaaaa\thelloworld" << endl;
	cout << "\thelloworld" << endl;

	system("pause");

	return 0;
}