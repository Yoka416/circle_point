#include "circle.h"
	
void circle::setr(int c)
	{
		r=c;
	}
	int circle::getr()
	{
		return r;
	}
	void circle::set_ceter_x(int center_x)
	{
		center.setx(center_x);
	}
	int circle::get_ceter_x()
	{
		int x=center.getx();
		return x;
	}

	void circle::set_ceter_y(int center_y)
	{
		 center.sety(center_y);
	}
	int circle::get_ceter_y()
	{
		int y=center.gety();
		return y;
	}
