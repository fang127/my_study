// #include<iostream>
// using namespace std;
// 
// //递增运算符重载
// 
// //自定义整型
// class MyInteger
// {
// 	//友元全局函数
// 	friend ostream &operator<<(ostream &cout, const MyInteger& p);
// public:
// 	MyInteger()
// 	{
// 		m_Num = 0;
// 	}
// 
// 	//重载++运算符
// 	//前置递增++
// 	MyInteger &operator++()
// 	{
// 		//先进行++运算
// 		m_Num++;
// 
// 		//再将自身做返回
// 		return *this;
// 	}
// 
// 	//后置递增++
// 	//这个int代表一个占位参数，用于区分前置和后置递增
// 	MyInteger operator++(int)//这里不加&，是因为temp是这个函数内的临时变量，函数结束，内存释放，如果引用就非法操作
// 	{
// 		//先记录当时结果 //不可直接返回，因为一旦return，这个函数就结束了
// 		MyInteger temp = *this;
// 		
// 		//后递增
// 		m_Num++;
// 
// 		//将记录结果返回
// 		return temp;
// 	}
// 
// private:
// 	int m_Num;
// };
// 
// //重载左运算符
// ostream &operator<<(ostream &cout,const MyInteger &p)//实现链式思维 返回引用，是为了一直对一个数据进行递增操作比如++（++mymint）这种情况，如果返回cout << mymint <<endl;则是1，原因是没有进行链式思维，在（）内的++完成后，调用拷贝函数创建了一个副本，不知道名字，然后再对副本进行++，而输出为mymint，所以只有1
// {
// 	cout << p.m_Num;
// 	return cout;
// }
// 
// void test01()
// {
// 	MyInteger mymint;
// 	cout << ++mymint << endl;
// }
// 
// void test02()
// {
// 	MyInteger mymint;
// 	cout << mymint++ << endl;//在重载左运算符中不能给MyInteger p加&，mymint++会生产匿名对象，原因就在于这个匿名对象，它和临时对象一样是具有常性的，那一个非常性的对象去引用常性的就会有问题了(权限扩大，即引用没有加const，那么这个引用可以修改，但是引用的对象不可以修改)，此时我们只需要在前面加上一个const即可const A& ra = A(1);或者去掉&,A ra = A(1)
// 	//如果生成的匿名对象在外部有对象等待被其实例化，此匿名对象的生命周期就变成了外部对象的生命周期；如果生成的匿名对象在外面没有对象等待被其实例化，此匿名对象将会生成之后，立马被析构。
// 	cout << mymint << endl;
// }
// 0
// int main()
// {
// 	test01();
// 	test02();
// 
// 	system("pause");
// 
// 	return 0;
// }