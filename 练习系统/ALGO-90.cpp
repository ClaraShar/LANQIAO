#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n;
	map<int,int> m;
	for(int i=0;i<n;++i)
	{
		int temp;
		cin>>temp;
		if(m.find(temp)!=m.end())
			m[temp]++;
		else
			m[temp]=1;
	}
	map<int,int>::iterator it=m.begin();
    int max=it->first;
	for(;it!=m.end();it++)
	{
		if(it->second>max)
			max=it->first;
	}
	cout<<max;
	cin>>n;
	return 0;
}