// #include<iostream>
// using namespace std;
// #include<algorithm>
// #include<vector>
// 
// void test01()
// {
// 	vector<int>v;
// 	v.push_back(0);
// 	v.push_back(1);
// 	v.push_back(5);
// 	v.push_back(2);
// 	v.push_back(2);
// 	v.push_back(4);
// 	v.push_back(2);
// 	v.push_back(4);
// 	v.push_back(87);
// 	v.push_back(8);
// 	v.push_back(8);
// 	v.push_back(10);
// 	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
// 	if (pos == v.end())
// 	{
// 		cout << "û�ҵ������ظ�Ԫ��" << endl;
// 	}
// 	else
// 	{
// 		cout << "�ҵ������ظ�Ԫ��" << *pos << endl;
// 	}
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