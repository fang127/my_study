// #include<iostream>
// using namespace std;
// #include<algorithm>
// #include<vector>
// 
// void myprint(int val)
// {
// 	cout << val << " ";
// }
// 
// void test01()
// {
// 	vector<int>v1;
// 	vector<int>v2;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		v1.push_back(i);
// 		v2.push_back(i + 100);
// 	}
// 	cout << "����ǰ��" << endl;
// 	for_each(v1.begin(), v1.end(), myprint);
// 	cout << endl;
// 	for_each(v2.begin(), v2.end(), myprint);
// 	cout << endl;
// 	cout << "-------------------" << endl;
// 	cout << "������" << endl;
// 	swap(v1, v2);
// 	for_each(v1.begin(), v1.end(), myprint);
// 	cout << endl;
// 	for_each(v2.begin(), v2.end(), myprint);
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