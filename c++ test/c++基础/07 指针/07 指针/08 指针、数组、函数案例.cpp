#include <iostream>
using namespace std;
#include"����.h"

int main()
{
	//������������װһ������������ð������ʵ�������������������
	//1����������
	int arr[10] = {4,3,6,9,1,2,10,8,7,5};
	int len = sizeof(arr) / sizeof(arr[0]);//�������ں���������Ϊ����Ϊarr�������˻�Ϊָ�루�����׵�ַ����û�а취�õ����鳤�ȣ�����ͨ�����������鳤��

	//2������������ʵ��ð������
	hanshu(arr,len);

	//3����ӡ����õ�����
	print(arr,len);

	system("pause");

	return 0;
}