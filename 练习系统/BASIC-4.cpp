#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,res=0;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;++i)
	{
		int temp;
		cin>>temp;
		res+=temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	cout<<v[n-1]<<endl;
	cout<<v[0]<<endl;
	cout<<res<<endl;
	return 0;
}