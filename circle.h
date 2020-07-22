#pragma once
#include<iostream>//标准的输入输出
using namespace std;
#include "point.h"

class circle
{
public:
	void setr(int c);
	
	int getr();
	
	void set_ceter_x(int center_x);
	
	int get_ceter_x();
	

	void set_ceter_y(int center_y);
	
	int get_ceter_y();
	

private:
		int r;
		point center;
};