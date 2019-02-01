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
	int n,m,l,r,k;
	cin>>n;
	vector<int> v1,v2;
	for(int i=0;i<n;++i)
	{
		int temp;
		cin>>temp;
		v1.push_back(temp);
	}
	cin>>m;
	int res[m];
	for(int i=0;i<m;++i)
	{
		cin>>l>>r>>k;
		for(int j=l-1;j<r;++j)
			v2.push_back(v1[j]);
		sort(v2.begin(),v2.end(),cmp);
		res[i]=v2[k-1];
		v2.clear();
	}
	for(int i=0;i<m;++i)
		cout<<res[i]<<endl;
	return 0;
}