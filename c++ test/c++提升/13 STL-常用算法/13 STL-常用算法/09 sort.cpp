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
// 	vector<int>v;
// 	v.push_back(10);
// 	v.push_back(60);
// 	v.push_back(20);
// 	v.push_back(30);
// 	v.push_back(50);
// 	v.push_back(40);
// 
// 	sort(v.begin(), v.end());
// 	for_each(v.begin(), v.end(), myprint);
// 	cout << endl;
// 
// 	//¸ÄÎª½µÐò
// 	sort(v.begin(), v.end(), greater<int>());
// 	for_each(v.begin(), v.end(), myprint);
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