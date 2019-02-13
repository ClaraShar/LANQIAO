#include <iostream>
using namespace std;

int main()
{
	char c;
    int n,m;
    cin>>c>>n>>m;
    if(c=='+')
        cout<<n+m;
    else if(c=='-')
        cout<<n-m;
    else if(c=='*')
    	cout<<n*m;
    else if(c=='/')
        cout<<n/m;
	return 0;
}