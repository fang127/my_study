// #include<iostream>
// using namespace std;
// #include<map>
// 
// void printMap(const map<int, int>& m)
// {
// 	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
// 	{
// 		cout << (*it).first << " " << (*it).second << endl;
// 	}
// 	cout << endl;
// }
// 
// void test01()
// {
// 	map<int, int>m;
// 	//�������ַ�ʽ��ǰ�������
// 	m.insert(pair<int, int>(1, 10));
// 	m.insert(make_pair(2, 20));
// 	m.insert(map<int,int>::value_type(3, 30));
// 	m[4] = 40;//[]��������룬��������[]����value
// 
// 	cout << m[4] << endl;
// 	//cout << m[5] << endl;//û��m[5]�����Զ�����һ��m[5] = 0��
// 	printMap(m);
// 
// 	//ɾ��
// 	m.erase(3);//����keyɾ��
// 	printMap(m);
// 
// 	m.erase(m.begin());
// 	printMap(m);
// 
// 	//���
// 	//m.clear();
// 	m.erase(m.begin(), m.end());
// 	printMap(m);
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