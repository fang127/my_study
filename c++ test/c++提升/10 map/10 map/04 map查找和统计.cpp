// #include<iostream>
// using namespace std;
// #include<map>
// 
// void test01()
// {
// 	map<int, int>m;
// 	m.insert(make_pair(1, 10));
// 	m.insert(make_pair(2, 20));
// 	m.insert(make_pair(3, 30));
// 	m.insert(make_pair(4, 40));
// 	m.insert(make_pair(5, 50));
// 
// 	map<int,int>::iterator pos = m.find(3);
// 	if (pos != m.end())
// 	{
// 		cout << "查找到了元素 key = " << (*pos).first << " value = " << (*pos).second << endl;
// 	}
// 	else
// 	{
// 		cout << "未找到" << endl;
// 	}
// 	//map不允许插入重复的key值，因此只能为0或1
// 	int num = m.count(3);
// 	cout << "num = " << num << endl;
// 	//multimap可以
// 	multimap<int, int>m1;
// 	m1.insert(make_pair(1, 10));
// 	m1.insert(make_pair(2, 20));
// 	m1.insert(make_pair(3, 30));
// 	m1.insert(make_pair(3, 40));
// 	m1.insert(make_pair(3, 50));
// 	int num1 = m1.count(3);
// 	cout << "num1 = " << num1 << endl;
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