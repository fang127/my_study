#include"Manager.h"

//��ʾ������Ϣ
void Manager::showInfo()
{
	cout << "ְ����ţ�" << this->m_id
		 << "\tְ��������" << this->m_name
		 << "\t��λ��" << this->getDid()
		 << "\t��λְ������ϰ尲�ŵ����񣬲��ҽ�������ɸ�Ա��" << endl;
}

//��ȡ��λ��Ϣ
string Manager::getDid()
{
	return string("����");
}

//���캯��
Manager::Manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}