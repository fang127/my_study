#include<iostream>
using namespace std;

//�����������������

//��ӡ�����
class MyPrint
{
public:

	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myprint;
	myprint("Hello World");//���ش�ӡ ��Ϊ�뺯�����ú�����˳�Ϊ�º���
	MyPrint02("Hello World");//��������
}

//�º����������û�й̶���д��

class Myadd
{
public:
	int operator()(int num1,int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	Myadd add;
	int ret = add(1, 2);

	cout << ret << endl;

	//������������ ��ִ�����������ͷ� ��Myadd()
	cout << Myadd()(100, 100) << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");

	return 0;
}