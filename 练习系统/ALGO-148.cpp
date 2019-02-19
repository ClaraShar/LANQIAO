#include <iostream>
using namespace std;

int GCD(int a,int b)
{
	while(a%b!=0)
	{
		int c=a%b;
		a=b;
		b=c;
	}
	return b;
}

int LCM(int a,int b)
{
	return a*b/GCD(a,b);
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<LCM(max(a,b),min(a,b));
	return 0;
}