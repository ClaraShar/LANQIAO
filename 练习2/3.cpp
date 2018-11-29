#include <iostream>
using namespace std;

int main()
{
	int n,max=0;
	cin>>n;
	while(n!=1)
	{
		if(n%2==0)
			n/=2;
		else
			n=n*3+1;
		if(n>max)
			max=n;
	}
	cout<<max;
	return 0;
}