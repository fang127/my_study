#include"Boss.h"

//��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ��������" << this->m_name
		<< "\t��λ��" << this->getDid()
		<< "\t��λְ����ɹ�˾��������" << endl;
}

//��ȡ��λ��Ϣ
string Boss::getDid()
{
	return string("�ܲ�");
}

Boss::Boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}