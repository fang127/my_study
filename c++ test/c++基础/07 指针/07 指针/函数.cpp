#include "����.h"

void hanshu(int* arr,int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];//����û�н����ã�����Ϊarr��������һ��ָ�룬arr[i]=*(arr+i)����ָ������ƶ�i����ַ��λ������*�������i����ַ������
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
}

void print(int* arr,int len)
{
	cout << "����õ�arr����Ϊ��";
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}