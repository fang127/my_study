// #include<iostream>
// using namespace std;
// 
// //字符存取
// void test01()
// {
// 	string str1 = "hello";
// 
// 	//1、通过[]访问单个字符
// 	for (int i = 0; i < str1.size();i++)
// 	{
// 		cout << str1[i] << " " ;
// 	}
// 	cout << endl;
// 
// 	//2、通过at方式访问
// 	for (int i = 0; i < str1.size(); i++)
// 	{
// 		cout << str1.at(i) << " ";
// 	}
// 	cout << endl;
// 
// 	//修改单个字符
// 	str1[0] = 'x';
// 	cout << "str1 = " << str1 << endl;
// 	str1.at(1) = 'b';
// 	cout << "str1 = " << str1 << endl;
// }
// 
// int main()
// {
// 	test01();
// 
// 	system("pause");
// 
// 	return 0;
// }