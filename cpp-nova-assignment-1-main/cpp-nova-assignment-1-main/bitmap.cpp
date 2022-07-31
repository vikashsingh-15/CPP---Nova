#include<iostream>
#include<cmath>
#include"bitmap.h"
using namespace std;

Complex::Complex()
{
	real = 0;
	img = 0;
}
	
Complex::Complex(int r, int i)
{
	real = r;
	img = i;
}
	
void Complex::Accept()
{
	cin >> real >> img;
}

void Complex::Display()
{
	cout << real << "+" << img << "i\n";
}
	
Complex Complex::operator+(Complex &c)
{
	Complex temp;
	temp.real = real + c.real;
	temp.img = img + c.img;
	return temp;
}
	
Complex Complex::operator-(Complex &c)
{
	Complex temp;
	temp.real = real - c.real;
	temp.img = img - c.img;
	return temp;

}
Complex Complex::operator++()
{
	Complex temp;
	temp.real = real + 1;
	temp.img = img + 1;
	return temp;
}
	
Complex Complex::operator++(int)
{
	Complex temp;
	temp.real = real + 1;
	temp.img = img + 1;
	return temp;
}

bool Complex::operator==(Complex &c)
{
	bool flag=true;
    if (real != c.real || img != c.img)
		flag = false;
	return flag;
}
	
	
	
	
	
	
