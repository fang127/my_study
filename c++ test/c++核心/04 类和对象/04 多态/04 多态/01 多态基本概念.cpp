// #include<iostream>
// using namespace std;
// 
// //��̬
// 
// //��̬��̬��������
// //1���м̳й�ϵ
// //2��������д������麯��  ��дָ ��������ֵ���� ������ �����б� ��ȫ��ͬ virtual��д�ɲ�д
// 
// //��̬��̬��ʹ��
// //�����ָ��������� ָ���������
// 
// //������
// class Animal
// {
// public:
// 	//�麯��
// 	virtual void speak()
// 	{
// 		cout << "������˵��" << endl;
// 	}
// };
// 
// //è��
// class Cat : public Animal
// {
// public:
// 	void speak()//��������д������麯���������е��麯�����ڲ��ᱻ�滻��������麯����ַ
// 	{
// 		cout << "Сè��˵��" << endl;
// 	}
// };
// 
// //����
// class Dog : public Animal
// {
// public:
// 	void speak()
// 	{
// 		cout << "С����˵��" << endl;
// 	}
// };
// 
// //ִ��˵���ĺ���
// //��ַ��� �ڱ���׶�ȷ��������ַ
// //�����ִ����è˵�� ��ô���������ַ������� ��Ҫ�����н׶ΰ󶨣������
// void doSpeak(Animal& animal)//��������ָ���������Animal &animal = cat  C++��������֮�������ת��������Ҫǿ������ת��
// {
// 	animal.speak();
// }
// 
// void test01()
// {
// 	Cat cat;
// 	doSpeak(cat);
// 
// 	Dog dog;
// 	doSpeak(dog);
// }
// 
// void test02()
// {
// 	cout << "size of Animal = " << sizeof(Animal) << endl;
// }
// 
// int main()
// {
// 	test01();
// 	test02();
// 
// 	system("pause");
// 
// 	return 0;
// }