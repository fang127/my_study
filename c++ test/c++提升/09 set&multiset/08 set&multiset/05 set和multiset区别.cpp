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
// 	set<int>s;
// 	pair<set<int>::iterator,bool>ret = s.insert(10);
// 	if (ret.second)
// 	{
// 		cout << "��һ�β���ɹ�" << endl;
// 	}
// 	else
// 	{
// 		cout << "��һ�β���ʧ��" << endl;
// 	}
// 	ret = s.insert(10);
// 	if (ret.second)
// 	{
// 		cout << "�ڶ��β���ɹ�" << endl;
// 	}
// 	else
// 	{
// 		cout << "�ڶ��β���ʧ��" << endl;
// 	}
// 	printSet(s);
// 
// 	multiset<int>ms;
// 	ms.insert(10);
// 	ms.insert(10);
// 	ms.insert(10);
// 	for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
// 	{
// 		cout << *it << " ";
// 	}
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