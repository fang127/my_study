// #include <iostream>
// using namespace std;
// #include<set>
// #include<algorithm>
// 
// void printSet(int val)
// {
// 	cout << val << " ";
// }
// 
// void test01()
// {
// 	set<int>s1;
// 	for (int i = 10; i > 0; i--)
// 	{
// 		s1.insert(i);
// 	}
// 	for_each(s1.begin(), s1.end(), printSet);
// 	cout << endl;
// 
// 	if (!s1.empty())
// 	{
// 		cout << "s1 is not empty!" << endl;
// 		cout << "s1 size is " << s1.size() << endl;
// 	}
// 	else
// 	{
// 		cout << "s1 is empty!" << endl;
// 	}
// 
// 	set<int>s2;
// 	s2.insert(100);
// 	s2.insert(200);
// 	s2.insert(300);
// 	for_each(s2.begin(), s2.end(), printSet);
// 	cout << endl;
// 
// 	s1.swap(s2);
// 	for_each(s1.begin(), s1.end(), printSet);
// 	cout << endl;
// 	for_each(s2.begin(), s2.end(), printSet);
// 	cout << endl;
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