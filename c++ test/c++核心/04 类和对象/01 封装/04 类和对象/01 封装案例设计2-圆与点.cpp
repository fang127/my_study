#include <iostream>
#include "circle.h"
#include "point.h"
#include"judge_rela.h"
using namespace std;

//判断点和圆的关系
//点类
// class point
// {
// private:
// 	int p_m;//点x坐标
// 	int p_n;//点y坐标
// public:
// 	//设置m
// 	void setp_m(int m)
// 	{
// 		p_m = m;
// 	}
// 	//获取m
// 	int getp_m()
// 	{
// 		return p_m;
// 	}//设置n
// 	void setp_n(int n)
// 	{
// 		p_n = n;
// 	}
// 	//获取x
// 	int getp_n()
// 	{
// 		return p_n;
// 	}
// };
//圆类
// class Circle
// {
// private:
// 	point c_center;//圆心 在类中可以让另一个类作为本类中的成员
// 	int c_r;//圆半径 
// public:
// 	//设置圆心
// 	void setc_center(point center)
// 	{
// 		c_center = center;
// 	}
// 	//获取圆心
// 	point getc_center()
// 	{
// 		return c_center;
// 	}
// 	//设置半径
// 	void setc_r(int r)
// 	{
// 		c_r = r;
// 	}
// 	//获取半径
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
// 		cout << "点在圆外" << endl;
// 	}
// 	else if (ret < c.getc_r() * c.getc_r())
// 	{
// 		cout << "点在圆内" << endl;
// 	}
// 	else
// 	{
// 		cout << "点在圆上" << endl;
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
	cout << "圆心x = " << c.getc_center().getp_m() << " 圆心y = " << c.getc_center().getp_n() << " r = " << c.getc_r() << endl;

	point p;
	p.setp_m(10);
	p.setp_n(10);
	cout << "m = " << p.getp_m() << " n = " << p.getp_n() << endl;

	judge_rela(c, p);



	system("pause");

	return 0;
}