#include"Employee.h"

//��ʾ������Ϣ
void Employee::showInfo()
{
	cout << "ְ����ţ�" << this->m_id 
		 << "\tְ��������" << this->m_name
		 << "\t��λ��" << this->getDid() 
		 << "\t��λְ����ɾ����ŵ�����" << endl;
}

//��ȡ��λ��Ϣ
string Employee::getDid()
{
	return string("Ա��");
}

//���캯��
Employee::Employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}