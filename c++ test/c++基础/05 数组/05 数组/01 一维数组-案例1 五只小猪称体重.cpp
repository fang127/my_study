#include <iostream>
using namespace std;

int main3()
{
	//������������һ�������м�¼����ֻС������أ���int arr[5] = {300��350��200��400��250}���ҵ�����ӡ���ص�С������
	//�������ֵ�ķ���
	int arr[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "���ص�С�������ǣ�" << max << endl;

	system("pause");

	return 0;
}