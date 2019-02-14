#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a,int b)
{
	return a>b;
}

int main()
{
	int m,n;
	cin>>m;
	while(m--)
	{
		cin>>n;
		vector<int> a,b;
		int sum=0;
		for(int i=0;i<n;++i)
		{
			int temp;
			cin>>temp;
			a.push_back(temp);
		}
		for(int i=0;i<n;++i)
		{
			int temp;
			cin>>temp;
			b.push_back(temp);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),cmp);
		for(int i=0;i<n;++i)
			sum+=a[i]*b[i];
		cout<<sum<<endl;
	}
	return 0;
}