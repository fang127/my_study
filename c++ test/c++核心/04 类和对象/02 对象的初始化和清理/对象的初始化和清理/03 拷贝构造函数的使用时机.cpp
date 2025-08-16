#include <iostream>
using namespace std;

//拷贝构造函数的调用时机
class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person(int age)
	{
		m_age = age;
		cout << "Person的有参构造函数调用" << endl;
	}
	Person(const Person& p)//拷贝构造函数的形参列表要使用&符号（引用），主要是为了防止不必要的对象拷贝，提高效率，并避免潜在的递归调用问题。具体原因有以下几点：

		/*1. 避免对象拷贝：

		如果你将形参设为值传递（ClassName other），那么在调用拷贝构造函数时，会首先创建一个临时对象other，然后再将这个临时对象拷贝到新对象中，这就会导致不必要的对象拷贝，浪费内存和时间。

		如果使用引用（const ClassName & other），那么你传递的是已有对象的引用，不会进行额外的拷贝，效率更高。

		2. 避免递归调用：

		如果拷贝构造函数的形参是按值传递的，那么在创建临时对象时，会再次调用拷贝构造函数，这可能导致递归调用。使用引用可以避免这种情况，因为引用不会创建新的对象。
		当你取消掉&后，拷贝构造函数的形参变成了值传递类型（ClassName other），这会导致编译错误，通常是因为：
        如果你将形参类型改成值传递，编译器在调用拷贝构造函数时，会创建一个临时对象作为传递给拷贝构造函数的参数。为了创建这个临时对象，编译器会再次调用拷贝构造函数。这个过程会导致递归调用拷贝构造函数，直到栈溢出，从而引发编译错误。
		3. 保证对象不被修改：

		通常，拷贝构造函数的目的是从另一个对象创建副本，而不是修改原始对象。为了避免在拷贝构造函数中修改原对象，常常将引用限定为const，使得它在函数体内不能被修改。

		总结：

		?	使用引用（ & ）避免了不必要的对象拷贝，提升了效率。
		?	使用const引用（const ClassName & ）防止修改原对象，且避免递归调用。

		这也是为什么拷贝构造函数的形参通常声明为const ClassName & other，而不是ClassName other。*/
	{
		m_age = p.m_age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int m_age;
};

//1、使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(20);
	Person p2(p1);

	cout << "p2的年龄为：" << p2.m_age << endl;
}

//2、值传递的方式给函数参数传值
void dowork(Person p)
{

}

void test02()
{
	Person p;
	dowork(p);
}

//3、值方式返回局部对象
Person dowork02()
{
	Person p1;//创建一个局部Person p1，在栈上分配内存
	cout << (int*)&p1 << endl;
	return Person(p1);//返回的p1和原来的p1不同，因为这会调用Person的拷贝构造函数，返回一个新的p1，地址与原p1不同，原p1在函数结束后才会被释放，但在新版vs中，如果是return p1，会取代原先的p1的内存，即返回的p1和原来的p1地址相同
}

void test03()
{
	Person p = dowork02();
	cout << (int*)&p << endl;
	//cout << (int*)&dowork02() << endl;//无法打印临时对象的地址，返回值是一个临时对象，临时对象的生命周期是有限的，在被返回后会销毁，因此不能直接取临时对象的地址
	//这里临时对象的地址和p的地址不同
}


int main()
{
	//test01();
	//test02();
	test03();

	system("pause");

	return 0;
}