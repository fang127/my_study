// #include <iostream>
// using namespace std;
// 
// class Person
// {
// public:
// 	Person(int age)
// 	{
// 		//age = age;//�������Ƴ�ͻ�޷�ʶ���һ��age�ǳ�Ա����
// 		this->age = age;//thisָ��ָ�򱻵��ó�Ա���������Ķ���
// 	}
// 
// 	Person& PersonAddAge(Person& p)//������ Person& ʱ�����ص��ǵ�ǰ��������á������߿���ֱ�Ӽ����Ըö�����в�����ʵ����ʽ���ã���������� Person�������� Person& �������ص��ǵ�ǰ����ĸ��������������ã�������ζ�ŷ��صĶ������* this �����һ��������������ԭʼ��������á�
// 	{
// 		this->age += p.age;
// 
// 		//this��ָ��p2��ָ�룬*this��p2����
// 		return *this;
// 	}
// 
// 	int age;
// };
// 
// //1��������Ƴ�ͻ
// void test01()
// {
// 	Person p1(18);
// 	cout << "p1.age = " << p1.age << endl;
// }
// 
// //2�����ض�������return *this
// void test02()
// {
// 	Person p1(10);
// 
// 	Person p2(10);
// 
// 	//��ʽ���˼��
// 	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
// 
// 	cout << "p2.age = " << p2.age << endl;
// }
// 
// int main()
// {
// 	//test01();
// 	test02();
// 
// 	system("pause");
// 
// 	return 0;
// }