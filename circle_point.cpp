#include<iostream>
using namespace std;
#include<string>
#include"circle.h"
#include"point.h"

//class point
//{
//public:
//	void setx(int a)
//	{
//		x=a;
//	}
//	int getx()
//	{
//		return x;
//	}
//	void sety(int b)
//	{
//		y =b;
//	}
//	int gety()
//	{
//		return y;
//	}
//private:
//	int x;
//	int y;
//};
//
//class circle
//{
//public:
//	void setr(int c)
//	{
//		r=c;
//	}
//	int getr()
//	{
//		return r;
//	}
//	void set_ceter_x(int center_x)
//	{
//		center.setx(center_x);
//	}
//	int get_ceter_x()
//	{
//		int x=center.getx();
//		return x;
//	}
//
//	void set_ceter_y(int center_y)
//	{
//		 center.sety(center_y);
//	}
//	int get_ceter_y()
//	{
//		int y=center.gety();
//		return y;
//	}
//
//private:
//		int r;
//		point center;
//};


void Iscircle(circle a, point p)
{
	int R=a.getr()*a.getr();
	int ret=(p.getx()-a.get_ceter_x())*(p.getx()-a.get_ceter_x())+(p.gety()-a.get_ceter_y())*(p.gety()-a.get_ceter_y());
	if (R==ret)
	{
		cout<<"点在圆上"<<endl;
	}
	else if(R<ret)
	{
		cout<<"点在圆外"<<endl;
	}else
	{
		cout<<"点在圆内"<<endl;
	}
}


int main()
{
	circle a;
	point b;
	a.set_ceter_x(10);
	a.set_ceter_y(0);
	a.setr(10);
	b.setx(10);
	b.sety(9);
	Iscircle(a,b);
	system("pause");
	return 0;

}