// #include<iostream>
// using namespace std;
// 
// //分别利用普通写法和多态技术实现计算器
// 
// //普通写法
// class Calculator
// {
// public:
// 
// 	int getResult(string oper)
// 	{
// 		if (oper == "+")
// 		{
// 			return m_Num1 + m_Num2;
// 		}
// 		else if (oper == "-")
// 		{
// 			return m_Num1 - m_Num2;
// 		}
// 		else if (oper == "*")
// 		{
// 			return m_Num1 * m_Num2;
// 		}
// 		//如果想拓展新的功能，需要修改源码
// 		//在真实的开发中 提倡 开闭原则
// 		//开闭原则：对拓展进行开放，对修改进行关闭
// 		//所以不提倡这种做法
// 	}
// 
// 	int m_Num1;
// 	int m_Num2;
// };
// 
// void test01()
// {
// 	Calculator c;
// 	c.m_Num1 = 10;
// 	c.m_Num2 = 10;
// 
// 	cout << c.m_Num1 << "+" << c.m_Num2 << " = " << c.getResult("+") << endl;
// 	cout << c.m_Num1 << "-" << c.m_Num2 << " = " << c.getResult("-") << endl;
// 	cout << c.m_Num1 << "*" << c.m_Num2 << " = " << c.getResult("*") << endl;
// }
// 
// //利用多态实现计算器
// 
// //实现计算器的抽象类
// class AbstractCalculator
// {
// public:
// 
// 	virtual int getResult()
// 	{
// 		return 0;
// 	}
// 
// 	int m_Num1;
// 	int m_Num2;
// };
// 
// //加法计算器类
// class AddCalculator : public AbstractCalculator
// {
// public:
// 
// 	int getResult()
// 	{
// 		return m_Num1 + m_Num2;
// 	}
// };
// 
// //减法计算器类
// class JianCalculator : public AbstractCalculator
// {
// public:
// 
// 	int getResult()
// 	{
// 		return m_Num1 - m_Num2;
// 	}
// };
// 
// //乘法计算器类
// class ChengCalculator : public AbstractCalculator
// {
// public:
// 
// 	int getResult()
// 	{
// 		return m_Num1 * m_Num2;
// 	}
// };
// 
// void test02()
// {
// 	//多态使用条件
// 	//父类指针或引用指向子类对象
// 
// 	//加法
// 	AbstractCalculator* abc = new AddCalculator;
// 	abc->m_Num1 = 10;
// 	abc->m_Num2 = 10;
// 
// 	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
// 
// 	//用完后释放堆区数据
// 	delete abc;
// 
// 	//减法运算
// 	abc = new JianCalculator;
// 	abc->m_Num1 = 100;
// 	abc->m_Num2 = 10;
// 	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
// 
// 	//用完后释放堆区数据
// 	delete abc;
// 
// 	//乘法运算
// 	abc = new ChengCalculator;
// 	abc->m_Num1 = 100;
// 	abc->m_Num2 = 10;
// 	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
// 
// }
// 
// //多态好处
// //1、代码组织结果清晰 //区域化每部分功能 便于修改
// //2、可读性强
// //3、对于前期和后期拓展以及维护性高
// 
// int main()
// {
// 	//test01();
// 
// 	test02();
// 
// 	system("pause");
// 
// 	return 0;
// }