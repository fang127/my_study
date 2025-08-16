// #include<iostream>
// using namespace std;
// #include<map>
// 
// void printMap(const map<int, int>& m)
// {
// 	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
// 	{
// 		cout << (*it).first << " " << (*it).second << endl;
// 	}
// 	cout << endl;
// }
// 
// void test01()
// {
// 	map<int, int>m;
// 	//插入四种方式，前两种最好
// 	m.insert(pair<int, int>(1, 10));
// 	m.insert(make_pair(2, 20));
// 	m.insert(map<int,int>::value_type(3, 30));
// 	m[4] = 40;//[]不建议插入，可以利用[]访问value
// 
// 	cout << m[4] << endl;
// 	//cout << m[5] << endl;//没有m[5]，会自动创造一个m[5] = 0；
// 	printMap(m);
// 
// 	//删除
// 	m.erase(3);//按照key删除
// 	printMap(m);
// 
// 	m.erase(m.begin());
// 	printMap(m);
// 
// 	//清空
// 	//m.clear();
// 	m.erase(m.begin(), m.end());
// 	printMap(m);
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