#include"circle.h"

//设置圆心
void circle::setc_center(point center)
{
	c_center = center;
}
//获取圆心
point circle::getc_center()
{
	return c_center;
}
//设置半径
void circle::setc_r(int r)
{
	c_r = r;
}
//获取半径
int circle::getc_r()
{
	return c_r;
}