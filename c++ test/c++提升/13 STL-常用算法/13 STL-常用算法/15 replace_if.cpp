// #include<iostream>
// using namespace std;
// #include<algorithm>
// #include<vector>
// 
// class myprint
// {
// public:
// 	void operator()(int val)
// 	{
// 		cout << val << " ";
// 	}
// };
// 
// class Greater30to3000
// {
// public:
// 	bool operator()(int val)
// 	{
// 		return val >= 30;
// 	}
// };
// 
// void test01()
// {
// 	vector<int>v;
// 	v.push_back(40);
// 	v.push_back(20);
// 	v.push_back(30);
// 	v.push_back(10);
// 	v.push_back(20);
// 	cout << "�滻ǰ��" << endl;
// 	for_each(v.begin(), v.end(), myprint());
// 	cout << endl;
// 	//���ڵ���30���滻Ϊ3000
// 	replace_if(v.begin(), v.end(), Greater30to3000(), 3000);
// 	cout << "�滻��" << endl;
// 	for_each(v.begin(), v.end(), myprint());
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