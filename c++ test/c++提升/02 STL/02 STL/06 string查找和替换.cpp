// #include<iostream>
// using namespace std;
// 
// //字符串查找与替换
// //1、查找
// void test01()
// {
// 	string str1 = "abcdefgde";
// 	int pos = str1.find("de");
// 	if (pos == -1)
// 	{
// 		cout << "未找到字符串" << endl;
// 	}
// 	else
// 	{
// 		cout << "找到字符串，位置为pos = " << pos << endl;
// 	}
// 
// 	//rfind和find区别
// 	//rfind是从右向走查找
// 	//find是从左向右查找
// 	pos = str1.rfind("de");
// 	cout << "pos = " << pos << endl;
// }
// 
// //2、替换
// void test02()
// {
// 	string str1 = "abcdefg";
// 	str1.replace(1, 3, "1111");
// 	cout << "str1 = " << str1 << endl;
// }
// 
// int main()
// {
// 	//test01();
// 	test02();
// 
// 	system("pause");
// 
// 	return 0;
// }