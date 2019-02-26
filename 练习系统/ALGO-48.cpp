#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n+1][m+1];
	memset(a,0,sizeof(a));
	for(int i=0;i<m;++i)
	{
		int j,k;
		cin>>j>>k;
		a[j-1][i]=1;
		a[k-1][i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;++j)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}