#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	if(s1.length()!=s2.length())
	{
		cout<<"N";
		return 0;
	}
	char a[81]={'0'},b[81]={'0'};
	for(int i=0;s1[i]&&s2[i];i++)
    {
        a[i]=tolower(s1[i]);
        b[i]=tolower(s2[i]);
    }
    sort(a,a+s1.size());
    sort(b,b+s1.size());
    for(int i=0;i<s1.size();i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"N"<<endl;
            return 0;
        }
    }
    cout<<"Y"<<endl;
	return 0;
}