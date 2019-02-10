#include <iostream>
#include <string>
using namespace std;

int main()
{
	char c[20];
	string s;
	cin>>s;
	for(int i=0;i<s.length();++i)
		c[i]=s[i];
	for(int i=0;i<s.length();++i)
	{
		if(c[i]<91)
			c[i]+=32;
		else
			c[i]-=32;
	}
	for(int i=0;i<s.length();++i)
		cout<<c[i];
	return 0;
}