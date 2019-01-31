#include <iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	for(i=5;i<=n;++i)
	{
		if(i%5==0)
		{
			for(int j=1;j<=5;++j)
				cout<<i/5;
		}
		else if(i%2==0)
		{
			int tmp=i/2;
			
		}
	}
	cin>>n;
	return 0;
}