// #include<iostream>
// using namespace std;
// 
// //�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����
// 
// //��ͨд��
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
// 		//�������չ�µĹ��ܣ���Ҫ�޸�Դ��
// 		//����ʵ�Ŀ����� �ᳫ ����ԭ��
// 		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
// 		//���Բ��ᳫ��������
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
// //���ö�̬ʵ�ּ�����
// 
// //ʵ�ּ������ĳ�����
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
// //�ӷ���������
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
// //������������
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
// //�˷���������
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
// 	//��̬ʹ������
// 	//����ָ�������ָ���������
// 
// 	//�ӷ�
// 	AbstractCalculator* abc = new AddCalculator;
// 	abc->m_Num1 = 10;
// 	abc->m_Num2 = 10;
// 
// 	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
// 
// 	//������ͷŶ�������
// 	delete abc;
// 
// 	//��������
// 	abc = new JianCalculator;
// 	abc->m_Num1 = 100;
// 	abc->m_Num2 = 10;
// 	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
// 
// 	//������ͷŶ�������
// 	delete abc;
// 
// 	//�˷�����
// 	abc = new ChengCalculator;
// 	abc->m_Num1 = 100;
// 	abc->m_Num2 = 10;
// 	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
// 
// }
// 
// //��̬�ô�
// //1��������֯������� //����ÿ���ֹ��� �����޸�
// //2���ɶ���ǿ
// //3������ǰ�ںͺ�����չ�Լ�ά���Ը�
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