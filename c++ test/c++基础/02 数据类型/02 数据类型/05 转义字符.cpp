#include <iostream>
using namespace std;


int main5()
{
	//ת���ַ�

	//���з� \n
	cout << "hello world" << endl;
	cout << "hello world\n";

	//��б�� \\
	
	cout << "\\" << endl;

	//ˮƽ�Ʊ�� \t ���ã������������
	cout << "aaa\thelloworld" << endl;//"aaa\t"��8���ַ�������ô���䣬3��a�Ļ�����5���ո�4��a����4���ո�
	cout << "a\thelloworld" << endl;
	cout << "aaaaa\thelloworld" << endl;
	cout << "\thelloworld" << endl;

	system("pause");

	return 0;
}