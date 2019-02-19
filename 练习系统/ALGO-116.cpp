#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long n,k,res=1,temp=0;
	cin>>n>>k;
	vector<long long> a;
	for(int i=0;i<n;++i)
	{
		int num;
		cin>>num;
		a.push_back(num);
	}
	sort(a.begin(),a.end());
	for(int i=n-1;i>=n-k;i--)
	{
		if(a[i]!=0)
			res*=a[i];
	}
	for(int i=0;i<n-k;i++)
		temp+=a[i];
	res*=temp;
	cout<<res;
	cin>>n;
	return 0;
}