// CFeet.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	CFeet(int tf, int ti);
	void display();
	~CFeet();
	int getfeet();
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
	cout << "基类默认构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
CFeet::CFeet(int tf,int ti)
{
	feet = tf;
	inches = ti;
	cout << "基类构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
CFeet::~CFeet()
{
	cout << "基类析构函数" << feet << "英尺" << inches << "英寸" << endl;
}
void CFeet::display()
{
	cout << "Display" << feet << "英尺" << inches << "英寸" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
class CMyFeet :public CFeet
{
public:
	CMyFeet(int f, int i);
	~CMyFeet();
};
CMyFeet::CMyFeet(int f,int i):CFeet(f,i)//意思是要先执行基类构造函数，否则首先执行的永远是基类默认构造函数
{
	cout << "派生类构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
CMyFeet::~CMyFeet()
{
	cout << "派生类析构函数" << feet << "英尺" << inches << "英寸" << endl;
}


int main()
{
	CMyFeet orect(3, 6);
	orect.display();
    return 0;
}

