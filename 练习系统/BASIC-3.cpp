#include <iostream>
using namespace std;

int main()
{
	int n,m,flag;
	cin>>n>>m;
	char a[n][m];
	for(int i=0;i<n;++i)
		a[i][0]=65+i;
	for(int i=0;i<n;++i)
	{
		flag=0;
		for(int j=1;j<m;++j)
		{
			if(a[i][j-1]>65&&flag==0)
				a[i][j]=a[i][j-1]-1;
			else if(a[i][j-1]==65)
			{
				a[i][j]=a[i][j-1]+1;
				flag=1;
			}
			else if(a[i][j-1]>65&&flag==1)
				a[i][j]=a[i][j-1]+1;
		}
	}
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
			cout<<a[i][j];
		cout<<endl;
	}
	cin>>n;
	return 0;
}