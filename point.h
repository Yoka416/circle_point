#pragma once
#include<iostream>//标准的输入输出
using namespace std;


class point
{
public:
	void setx(int a);
	
	int getx();
	
	void sety(int b);
	
	int gety();
	
private:
	int x;
	int y;
};
