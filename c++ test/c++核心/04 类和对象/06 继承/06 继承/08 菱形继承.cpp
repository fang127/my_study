#include<iostream>
using namespace std;

//���μ̳�
//������
class Animal
{
public:
	int m_age;
};

//������̳� ������μ̳е�����
//�ڼ̳�֮ǰ ���Ϲؼ���virtual��Ϊ��̳�
// Animal���Ϊ�����
//����
class Sheep : virtual public Animal
{

};

//����
class Tuo : virtual public Animal
{

};

//������
class SheepTuo : public Sheep, public Tuo
{

};

void test01()
{
	SheepTuo st;

	st.Sheep::m_age = 18;
	st.Tuo::m_age = 28;

	//�����μ̳У��������������ͬ���ݣ���Ҫ�����������������
	cout << "st.Sheep::m_age = " << st.Sheep::m_age << endl;
	cout << "st.Tuo::m_age = " << st.Tuo::m_age << endl;
	
	//�����������֪�� ֻ��һ�ݾͿ����ˣ����μ̳е������������ݣ���Դ�˷�
	//ͨ����̳н��
	//��̳�֮��Ϳ��Բ���������
	cout << "st.m_age = " << st.m_age << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}