#include<iostream>
using namespace std;

//菱形继承
//动物类
class Animal
{
public:
	int m_age;
};

//利用虚继承 解决菱形继承的问题
//在继承之前 加上关键字virtual变为虚继承
// Animal类称为虚基类
//羊类
class Sheep : virtual public Animal
{

};

//驼类
class Tuo : virtual public Animal
{

};

//羊驼类
class SheepTuo : public Sheep, public Tuo
{

};

void test01()
{
	SheepTuo st;

	st.Sheep::m_age = 18;
	st.Tuo::m_age = 28;

	//当菱形继承，两个父类具有相同数据，需要加以作用域进行区分
	cout << "st.Sheep::m_age = " << st.Sheep::m_age << endl;
	cout << "st.Tuo::m_age = " << st.Tuo::m_age << endl;
	
	//这份数据我们知道 只有一份就可以了，菱形继承导致数据有两份，资源浪费
	//通过虚继承解决
	//虚继承之后就可以不用作用域
	cout << "st.m_age = " << st.m_age << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}