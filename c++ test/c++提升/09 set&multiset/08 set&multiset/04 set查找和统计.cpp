// #include <iostream>
// using namespace std;
// #include<set>
// 
// void printSet(const set<int>& s)
// {
// 	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
// 	{
// 		cout << *it << " ";
// 	}
// 	cout << endl;
// }
// 
// void test01()
// {
// 	set<int>s1;
// 	s1.insert(10);
// 	s1.insert(20);
// 	s1.insert(30);
// 	s1.insert(40);
// 	s1.insert(50);
// 	printSet(s1);
// 
// 	set<int>::iterator pos = s1.find(30);
// 
// 	if (pos != s1.end())
// 	{
// 		cout << "找到元素" << *pos << endl;
// 	}
// 	else
// 	{
// 		cout << "未找到" << endl;
// 	}
// 	//对于set而言，统计结果只能为1或0
// 	int num = s1.count(30);
// 	cout << "num = " << num << endl;
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