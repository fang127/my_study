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
// 	vector<int>v;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		v1.push_back(i);
// 		v2.push_back(i + 1);
// 	}
// 	v.resize(v1.size() + v2.size());
// 	//�������вſ��Խ��кϲ�
// 	//�ϲ�֮����Ϊ��������
// 	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
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