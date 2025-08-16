#include"judge_rela.h"

void judge_rela(circle& c, point& p)
{
	int ret = (c.getc_center().getp_m() - p.getp_m()) * (c.getc_center().getp_m() - p.getp_m()) + (c.getc_center().getp_n() - p.getp_n()) * (c.getc_center().getp_n() - p.getp_n());
	if (ret > c.getc_r() * c.getc_r())
	{
		cout << "点在圆外" << endl;
	}
	else if (ret < c.getc_r() * c.getc_r())
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆上" << endl;
	}
}