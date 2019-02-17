#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	string s;
	long long num=0;//不超过8位
	cin>>s;
	reverse(s.begin(),s.end());
	for(int i=0;i<s.length();++i)
	{
		if(s[i]>='0'&&s[i]<='9')
			num+=(s[i]-'0')*pow(16,i);
		else if(s[i]>='A'&&s[i]<='F')
			num+=(s[i]-55)*pow(16,i);
	}
	cout<<num<<endl;
	cin>>num;
	return 0;
}