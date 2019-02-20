#include <iostream>
using namespace std;

int DFS(int k,int n)
{
	if(k==0||k==n)
		return 1;
	else if(k>0&&k<n)
		return DFS(k,n-1)+DFS(k-1,n-1);
	return 0;
}

int main()
{
	int k,n;
	cin>>k>>n;
	cout<<DFS(k,n);
	return 0;
}