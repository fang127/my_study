#include <iostream>
using namespace std;

int main7()
{
	//��ά����������;

	//1���鿴ռ���ڴ�ռ��С
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "��ά����ռ���ڴ�ռ��СΪ��" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ���ڴ�ռ��СΪ��" << sizeof(arr[0]) << endl;
	cout << "��ά����ڶ���ռ���ڴ�ռ��СΪ��" << sizeof(arr[1]) << endl;
	cout << "��ά�����һ��Ԫ��ռ���ڴ�ռ��СΪ��" << sizeof(arr[0][0]) << endl;
	cout << "��ά��������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά��������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2���鿴��ά�����׵�ַ
	cout << "��ά�����׵�ַΪ��" << arr << endl;
	cout << "��ά�����׵�ַΪ��" << (long long)arr << endl; //ǿ�ƽ�16����תΪ10����
	cout << "��ά�����һ���׵�ַΪ��" << (long long)arr[0] << endl; //ǿ�ƽ�16����תΪ10����
	cout << "��ά����ڶ����׵�ַΪ��" << (long long)arr[1] << endl; //ǿ�ƽ�16����תΪ10����
	cout << "��ά���飨1��1���׵�ַΪ��" << (long long)&arr[0][0] << endl; //ǿ�ƽ�16����תΪ10���ƣ�����Ԫ��Ҫ��&
	cout << "��ά���飨1��2���׵�ַΪ��" << (long long)&arr[0][1] << endl; //ǿ�ƽ�16����תΪ10����
	cout << "��ά���飨2��1���׵�ַΪ��" << (long long)&arr[1][0] << endl; //ǿ�ƽ�16����תΪ10����

	system("pause");

	return 0;
}