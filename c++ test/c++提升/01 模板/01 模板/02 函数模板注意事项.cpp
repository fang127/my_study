//#include<iostream>
//using namespace std;
//
////����ģ��ע������
//template<typename T>//typename�����滻Ϊclass
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1���Զ������Ƶ��������Ƶ���һ�µ���������T���ſ���ʹ��
//void test01()
//{
//	int a = 10, b = 20;
//	char c = 'c';
//	//myswap(a, b);
//	//myswao(a, c);//���󣬲����Ƶ���һ�µ�T����
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
////2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template<class T>//typename�����滻Ϊclass
//void func()
//{
//	cout << "func�ĵ���" << endl;
//}
//
//void test02()
//{
//	//func();//û�д���ʵ�Σ��������޷��Ƶ�T�������ͣ�ֻ���޸����棺
//	func<int>();
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}