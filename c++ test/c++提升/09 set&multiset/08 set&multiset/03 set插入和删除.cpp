// #include <iostream>
// using namespace std;
// #include<set>
// 
// void printset(const set<int>& s)
// {
// 	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
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
// 	printset(s1);
// 
// 	s1.erase(s1.begin());
// 	printset(s1);
// 
// 	s1.erase(30);
// 	printset(s1);
// 
// 	//s1.erase(s1.begin(), s1.end());
// 	s1.clear();
// 	printset(s1);
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