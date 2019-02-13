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
	vector<int> v;
	for(int i=0;i<3;++i)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<3;++i)
		cout<<v[i]<<" ";
	return 0;
}