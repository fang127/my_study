// #include <iostream>
// using namespace std;
// #include<string>
// 
// //��Ա��������Ϊ˽��
// //1�������Լ����ƶ�дȨ��
// //2������дȨ�ޣ����Լ��������Ч��
// 
// //����
// class Person
// {
// public:
// 	//�������� 
// 	void setname(string name)
// 	{
// 		m_name = name;
// 	}
// 	//������ȡ����
// 	string getname()
// 	{
// 		return m_name;
// 	}
// 
// 	//��ȡ����
// 	int getage()
// 	{
// 		return m_age;
// 	}
// 
// 	void setidol(string idol)
// 	{
// 		m_idol = idol;
// 	}
// 
// 	string setgender()
// 	{
// 		return m_gender;
// 	}
// 
// 	void getgender(string gender)
// 	{
// 		if (m_gender != "��" || m_gender != "Ů")
// 		{
// 			cout << "�������������¸�ֵ" << endl;
// 			return;
// 		}
// 		else
// 		{
// 			m_gender = gender;
// 		}
// 	}
// 
// private:
// 	string m_name;//���� �ɶ���д
// 
// 	int m_age = 18;//���� ֻ��
// 
// 	string m_idol;//ż�� ֻд
// 
// 	string m_gender;//�Ա� �ɶ���д ��Ҫ���������Ч��
// };
// 
// int main()
// {
// 	Person p;
// 
// 	//p.m_name = "����";//����˽�����Բ������������
// 
// 	//��ô��˽�����Խ��п���
// 
// 	//�������� �ɶ���д
// 	p.setname("����");
// 	//��ȡ����
// 	cout << "������" << p.getname() << endl;
// 
// 	//�������� ֻ��
// 	//p.setage(20);//����
// 	//p.m_age = 20;//���� ˽���������ⲻ�ɷ���
// 	//��ȡ����
// 	cout << "���䣺" << p.getage() << endl;
// 
// 	//����ż�� ֻд
// 	p.setidol("�ܽ���");
// 	//��ȡ����
// 	//cout << "ż��" << p.m_idol << endl;
// 	//cout << "ż��" << p.getidol << endl;
// 
// 	p.getgender("��");
// 	cout << "�Ա�" << p.setgender() << endl;
// 
// 	system("pause");
// 
// 	return 0;
// }