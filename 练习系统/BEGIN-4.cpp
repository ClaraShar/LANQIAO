#include <iostream>
using namespace std;

int main()
{
	int n,f1=1,f2=1,f3=1,i=3;
	cin>>n;
	if(n>2)
	{
		while(i<=n)
		{	
			f3=(f1+f2)%10007;
			f1=f2;
			f2=f3;
			++i;
		}
	}
	cout<<f3;
	return 0;
}