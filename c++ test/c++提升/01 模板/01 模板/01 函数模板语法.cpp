//#include<iostream>
//using namespace std;
//
////�������ͽ����ĺ���
//void swapInt(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////�������������ͺ���
//void swapDouble(double &a,double &b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//	
//}
//
////����ģ��
//template<typename T> //����һ��ģ�壬���߱�������������н�����T��Ҫ����T��һ��ͨ����������
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//swapInt(a, b);
//	//cout << "a = " << a << " b = " << b << endl;
//
//	//double c = 1.1, d = 2.2;
//	//swapDouble(c, d);
//	//cout << "c = " << c << " d = " << d << endl;
//
//	//���ú���ģ����н���
//	//�����ַ�ʽʹ�ú���ģ��
//	//1���Զ������Ƶ�
//	//myswap(a, b);
//	//cout << "a = " << a << " b = " << b << endl;
//
//	//2����ʾָ������
//	myswap<int>(a, b);
//	cout << "a = " << a << " b = " << b << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}