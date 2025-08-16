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
// 		v1.push_back(i);//0-9
// 		v2.push_back(i + 5);//5-14
// 	}
// 
// 	vector<int>v;
// 	//提前开辟空间 最特殊情况 大的包含小容器 取小容器size即可
// 	v.resize(min(v1.size(), v2.size()));
// 	//v.resize(v1.size() > v2.size() ? v2.size() : v1.size());
// 	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
// 	for_each(v.begin(), itEnd, myprint);//求交集返回的是最后一个元素位置的迭代器 + 1，这里最好用itEnd，不用v.end()，因为v.end()位置可能大于itEnd
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