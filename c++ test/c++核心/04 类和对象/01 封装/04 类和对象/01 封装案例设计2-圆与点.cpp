#include <iostream>
#include "circle.h"
#include "point.h"
#include"judge_rela.h"
using namespace std;

//�жϵ��Բ�Ĺ�ϵ
//����
// class point
// {
// private:
// 	int p_m;//��x����
// 	int p_n;//��y����
// public:
// 	//����m
// 	void setp_m(int m)
// 	{
// 		p_m = m;
// 	}
// 	//��ȡm
// 	int getp_m()
// 	{
// 		return p_m;
// 	}//����n
// 	void setp_n(int n)
// 	{
// 		p_n = n;
// 	}
// 	//��ȡx
// 	int getp_n()
// 	{
// 		return p_n;
// 	}
// };
//Բ��
// class Circle
// {
// private:
// 	point c_center;//Բ�� �����п�������һ������Ϊ�����еĳ�Ա
// 	int c_r;//Բ�뾶 
// public:
// 	//����Բ��
// 	void setc_center(point center)
// 	{
// 		c_center = center;
// 	}
// 	//��ȡԲ��
// 	point getc_center()
// 	{
// 		return c_center;
// 	}
// 	//���ð뾶
// 	void setc_r(int r)
// 	{
// 		c_r = r;
// 	}
// 	//��ȡ�뾶
// 	int getc_r()
// 	{
// 		return c_r;
// 	}
// };

// void judge_rela(circle& c, point& p)
// {
// 	int ret = (c.getc_center().getp_m() - p.getp_m()) * (c.getc_center().getp_m() - p.getp_m()) + (c.getc_center().getp_n() - p.getp_n()) * (c.getc_center().getp_n() - p.getp_n());
// 	if (ret > c.getc_r() * c.getc_r())
// 	{
// 		cout << "����Բ��" << endl;
// 	}
// 	else if (ret < c.getc_r() * c.getc_r())
// 	{
// 		cout << "����Բ��" << endl;
// 	}
// 	else
// 	{
// 		cout << "����Բ��" << endl;
// 	}
// }


int main()
{
	circle c;
	point center;
	center.setp_m(10);
	center.setp_n(0);
	c.setc_center(center);
	c.setc_r(10);
	cout << "Բ��x = " << c.getc_center().getp_m() << " Բ��y = " << c.getc_center().getp_n() << " r = " << c.getc_r() << endl;

	point p;
	p.setp_m(10);
	p.setp_n(10);
	cout << "m = " << p.getp_m() << " n = " << p.getp_n() << endl;

	judge_rela(c, p);



	system("pause");

	return 0;
}