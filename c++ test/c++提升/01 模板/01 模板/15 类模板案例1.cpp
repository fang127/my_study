#include<iostream>
using namespace std;
#include"MyArray.hpp"

//实现一个通用的数组类
// * 可以对内置数据类型以及自定义数据类型的数据进行存储
// * 将数组中的数据存储到堆区
// * 构造函数中可以传入数组的容量
// * 提供对应的拷贝构造函数以及operator = 防止浅拷贝问题
// * 提供尾插法和尾删法对数组中的数据进行增加和删除
// * 可以通过下标的方式访问数组中的元素
// * 可以获取数组中当前元素个数和数组的容量

void printarray(MyArray<int>&arr)
{
	for (int i = 0; i < arr.getnumarray(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//测试代码
void test01()
{
	MyArray<int> arr1(5);

	//尾加
	for (int i = 0; i < 5; i++)
	{
		arr1.Add_back(i);
	}
	cout << "arr1 print is " << endl;
	printarray(arr1);

	//返回数组大小与容量
	cout << "arr1 capacity is : " << arr1.getcapacity() << endl;
	cout << "arr1 Numarray is : " << arr1.getnumarray() << endl;

	//拷贝
	MyArray<int> arr2(arr1);
	cout << "arr2 print is " << endl;
	printarray(arr2);

	//尾删
	arr2.delete_back();
	cout << "arr2 delete print is " << endl;
	printarray(arr2);

	cout << "arr2 capacity is : " << arr2.getcapacity() << endl;
	cout << "arr2 Numarray is : " << arr2.getnumarray() << endl;


// 	MyArray<int> arr2(arr1);
// 	MyArray<int> arr3(100);
// 	arr3 = arr1;
}

//测试自定义数据类型
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