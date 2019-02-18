#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

long long Transform(string s)
{
	long long num=0;//不超过8位
	reverse(s.begin(),s.end());
	for(int i=0;i<s.length();++i)
	{
		if(s[i]>='0'&&s[i]<='9')
			num+=(s[i]-'0')*pow(16,i);
		else if(s[i]>='A'&&s[i]<='F')
			num+=(s[i]-55)*pow(16,i);
	}
	return num;
}
int main()
{
	int n;
	cin>>n;
	vector<long long> v;
	for(int i=0;i<n;++i)
	{
		string s;
		cin>>s;
		v.push_back(Transform(s));
	}
	for(int i=0;i<n;++i)
		cout<<oct<<v[i]<<endl;
	return 0;
}