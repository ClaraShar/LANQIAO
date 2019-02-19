#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

struct Complex
{
	float real;
	float imag;	
};

Complex res;

void Add(Complex a,Complex b)
{
	res.real=a.real+b.real;
	res.imag=a.imag+b.imag;
}

void Sub(Complex a,Complex b)
{
	res.real=a.real-b.real;
	res.imag=a.imag-b.imag;
}

void Mul(Complex a,Complex b)
{
	res.real=a.real*b.real-a.imag*b.imag;
	res.imag=a.real*b.imag+a.imag*b.real;
}

void Chu(Complex a,Complex b)
{
	res.real=(a.real*b.real+a.imag*b.imag)/(pow(b.real,2)+pow(b.imag,2));
	res.imag=(a.imag*b.real-a.real*b.imag)/(pow(b.real,2)+pow(b.imag,2));
}
int main()
{
	char c;
	Complex a,b;
	cin>>c;
	cin>>a.real>>a.imag>>b.real>>b.imag;
	if(c=='+')
		Add(a,b);
	else if(c=='-')
		Sub(a,b);
	else if(c=='*')
		Mul(a,b);
	else if(c=='/')
		Chu(a,b);
	cout<<fixed<<setprecision(2)<<res.real<<"+"<<fixed<<setprecision(2)<<res.imag<<"i";
	return 0;
}