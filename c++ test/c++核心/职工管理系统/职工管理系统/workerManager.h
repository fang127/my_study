#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>//�������������ͷ�ļ�
using namespace std;//ʹ�ñ�׼�����ռ�
#include"worker.h"
#include<fstream>
#define FILENAME "empFile.txt"

//����������  ���в����ڹ��������
class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//���ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//ͳ���ļ�������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�ж�ְ���Ƿ����
	int Isexist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ�� ���ַ��� ��������
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//�������
	void Clean_File();

	//��������
	~WorkerManager();

	//��¼ְ������
	int m_EmpNum;

	//��¼ְ������ָ�� ָ��ָ�������ָ��
	Worker** m_EmpArray;

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
};