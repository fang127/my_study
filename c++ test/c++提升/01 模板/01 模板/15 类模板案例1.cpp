#include<iostream>
using namespace std;
#include"MyArray.hpp"

//ʵ��һ��ͨ�õ�������
// * ���Զ��������������Լ��Զ����������͵����ݽ��д洢
// * �������е����ݴ洢������
// * ���캯���п��Դ������������
// * �ṩ��Ӧ�Ŀ������캯���Լ�operator = ��ֹǳ��������
// * �ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
// * ����ͨ���±�ķ�ʽ���������е�Ԫ��
// * ���Ի�ȡ�����е�ǰԪ�ظ��������������

void printarray(MyArray<int>&arr)
{
	for (int i = 0; i < arr.getnumarray(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//���Դ���
void test01()
{
	MyArray<int> arr1(5);

	//β��
	for (int i = 0; i < 5; i++)
	{
		arr1.Add_back(i);
	}
	cout << "arr1 print is " << endl;
	printarray(arr1);

	//���������С������
	cout << "arr1 capacity is : " << arr1.getcapacity() << endl;
	cout << "arr1 Numarray is : " << arr1.getnumarray() << endl;

	//����
	MyArray<int> arr2(arr1);
	cout << "arr2 print is " << endl;
	printarray(arr2);

	//βɾ
	arr2.delete_back();
	cout << "arr2 delete print is " << endl;
	printarray(arr2);

	cout << "arr2 capacity is : " << arr2.getcapacity() << endl;
	cout << "arr2 Numarray is : " << arr2.getnumarray() << endl;


// 	MyArray<int> arr2(arr1);
// 	MyArray<int> arr3(100);
// 	arr3 = arr1;
}

//�����Զ�����������
class Person
{
public:
	Person(){};

	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

void printPersonarray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getnumarray(); i++)
	{
		cout << arr[i].m_name << " " << arr[i].m_age << endl;;
	}
}

void test02()
{
	MyArray<Person> arr(10);
	Person p1("Tom", 19);
	Person p2("Jerry", 20);
	Person p3("Aom", 11);
	Person p4("Ger", 220);
	Person p5("Ser", 23);

	arr.Add_back(p1);
	arr.Add_back(p2);
	arr.Add_back(p3);
	arr.Add_back(p4);
	arr.Add_back(p5);
	printPersonarray(arr);

	cout << "arr capacity is : " << arr.getcapacity() << endl;
	cout << "arr Numarray is : " << arr.getnumarray() << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");

	return 0;
}