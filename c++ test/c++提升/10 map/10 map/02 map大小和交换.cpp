// #include<iostream>
// using namespace std;
// #include<map>
// 
// void printMap(const map<int, int>& m)
// {
// 	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
// 	{
// 		cout << "key = " << (*it).first << "\tvalue = " << (*it).second << endl;
// 	}
// 	cout << endl;
// }
// 
// void test01()
// {
// 	map<int, int>m;
// 	m.insert(pair<int, int>(1, 10));
// 	m.insert(pair<int, int>(2, 20));
// 	m.insert(pair<int, int>(4, 30));
// 	m.insert(pair<int, int>(3, 50));
// 	m.insert(pair<int, int>(5, 40));
// 
// 	if (m.empty())
// 	{
// 		cout << "m is empty!" << endl;
// 	}
// 	else
// 	{
// 		cout << "m is not empty!" << endl;
// 		cout << "m size is " << m.size() << endl;
// 	}
// 
// 	cout << "交换前：" << endl;
// 	printMap(m);
// 
// 	map<int, int>m2;
// 	m2.insert(pair<int, int>(1, 100));
// 	m2.insert(pair<int, int>(2, 200));
// 	m2.insert(pair<int, int>(4, 300));
// 	m2.insert(pair<int, int>(3, 500));
// 	m2.insert(pair<int, int>(5, 400));
// 	printMap(m2);
// 	
// 	m.swap(m2);
// 	cout << "交换后：" << endl;
// 	printMap(m);
// 	printMap(m2);
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