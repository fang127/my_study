// #include <iostream>
// using namespace std;
// 
// //�����������
// //������������������
// //�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
// 
// class Cube
// {
// private://�������� ˽��
// 	int m_L;
// 	int m_W;
// 	int m_H;
// public://��Ϊ ����
// 	//�������
// 	int getsqa()
// 	{
// 		return 2 * m_L * m_H + 2 * m_L * m_W + 2 * m_W * m_H;
// 	}
// 	//�������
// 	int getVol()
// 	{
// 		return m_L * m_H * m_W;
// 	}
// 	//���ø�
// 	void setm_H(int h)
// 	{
// 		m_H = h;
// 	}
// 	//��ȡ��
// 	int getm_H()
// 	{
// 		return m_H;
// 	}
// 	//���ó�
// 	void setm_L(int l)
// 	{
// 		m_L = l;
// 	}
// 	//��ȡ��
// 	int getm_L()
// 	{
// 		return m_L;
// 	}
// 	//���ÿ�
// 	void setm_W(int w)
// 	{
// 		m_W = w;
// 	}
// 	//��ȡ��
// 	int getm_W()
// 	{
// 		return m_W;
// 	}
// 	//���ó�Ա�����ж������������Ƿ����
// 	bool judgesamebyclass(Cube& c2)
// 	{
// 		if (m_H == c2.getm_H() && m_L == c2.getm_L() && m_W == c2.getm_W())
// 		{
// 			return true;
// 		}
// 		return false;
// 	}
// };
// 
// //����ȫ�ֺ����ж� �����������Ƿ����
// bool judgesame(Cube& c1, Cube& c2)
// {
// 	if (c1.getm_H() == c2.getm_H() && c1.getm_L() == c2.getm_L() && c1.getm_W() == c2.getm_W())
// 	{
// 		return true;
// 	}
// 	return false;
// }
// 
// int main()
// {
// 	//ʵ����
// 	Cube c1;
// 	c1.setm_L(10);
// 	c1.setm_H(10);
// 	c1.setm_W(10);
// 
// 	cout << "c1�����Ϊ��" << c1.getsqa() << endl;
// 	cout << "c1�����Ϊ��" << c1.getVol() << endl;
// 
// 	Cube c2;
// 	c2.setm_H(10);
// 	c2.setm_L(10);
// 	c2.setm_W(10);
// 
// 	bool ret = judgesame(c1, c2);
// 
// 	if (ret)
// 	{
// 		cout << "ȫ�ֺ��� c1��c2����ȵ�" << endl;
// 	}
// 	else
// 	{
// 		cout << "ȫ�ֺ��� c1��c2�ǲ���ȵ�" << endl;
// 	}
// 
// 	bool ret1 = c1.judgesamebyclass(c2);
// 	if (ret1)
// 	{
// 		cout << "��Ա���� c1��c2����ȵ�" << endl;
// 	}
// 	else
// 	{
// 		cout << "��Ա���� c1��c2�ǲ���ȵ�" << endl;
// 	}
// 
// 	system("pause");
// 
// 	return 0;
// }