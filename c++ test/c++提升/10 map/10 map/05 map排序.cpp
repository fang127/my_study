// #include<iostream>
// using namespace std;
// #include<map>
// 
// class mycompare
// {
// public:
// 	bool operator()(int val1, int val2)const
// 	{
// 		return val1 > val2;
// 	}
// };
// 
// void printMap(const map<int, int, mycompare>& m)
// {
// 	for (map<int, int, mycompare>::const_iterator it = m.begin(); it != m.end(); it++)
// 	{
// 		cout << (*it).first << " " << (*it).second << endl;
// 	}
// 	cout << endl;
// }
// 
// void test01()
// {
// 	map<int, int,mycompare>m;
// 	m.insert(pair<int, int>(1, 10));
// 	m.insert(pair<int, int>(2, 20));
// 	m.insert(pair<int, int>(3, 30));
// 	m.insert(pair<int, int>(4, 40));
// 	m.insert(pair<int, int>(5, 50));
// 	printMap(m);
// 
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