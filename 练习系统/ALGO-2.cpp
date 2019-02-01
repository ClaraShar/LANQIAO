#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin>>n;
	if(n<=2)
		cout<<n;
	else if(n%2)
		cout<<(n-2)*(n-1)*n;
	else
	{
		if(n%3==0)
			cout<<(n-3)*(n-2)*(n-1);
		else
			cout<<(n-3)*(n-1)*n;
	}
	return 0;
}