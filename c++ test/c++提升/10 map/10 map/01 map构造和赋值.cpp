// #include<iostream>
// using namespace std;
// #include<map>
// 
// void printMap(map<int, int>& m)
// {
// 	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
// 	{
// 		cout << "key = " << (*it).first << "\tvalue = " << (*it).second << endl;
// 	}
// }
// 
// void test01()
// {
// 	//默认构造
// 	map<int, int>m;
// 	m.insert(pair<int, int>(1, 10));
// 	m.insert(pair<int, int>(4, 30));
// 	m.insert(pair<int, int>(3, 60));
// 	m.insert(pair<int, int>(2, 50));
// 	m.insert(pair<int, int>(5, 10));
// 
// 	printMap(m);
// 
// 	//拷贝构造
// 	map<int, int>m2(m);
// 	printMap(m2);
// 
// 	//赋值
// 	map<int, int>m3;
// 	m3 = m2;
// 	printMap(m3);
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