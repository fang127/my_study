#include <iostream>
using namespace std;

//1��new�Ļ����﷨
int* func()
{
	//�ڶ���������������
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//���������� �ɳ���Ա�����٣������ͷ�
	//������ͷŶ��������ݣ����ùؼ���delect
	delete p;
	//cout << *p << endl;//��α�������ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ�����
}

//2���ڶ�������new��������
void test02()
{
	//����10���������ݵ����飬�ڶ���
	int* arr = new int[10];//С����ʱһ������10�������Ŵ������飬��10��Ԫ��
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//��10��Ԫ�ظ�ֵ100-109
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������
	//�ͷ������ʱ��Ҫ����������[]
	delete[] arr;
}


int main()
{
	test01();

	test02();
	
	system("pause");

	return 0;
}