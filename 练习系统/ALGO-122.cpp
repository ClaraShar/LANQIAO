//https://blog.csdn.net/liuke19950717/article/details/50895142
//f(m-1,n)+f(m,n-1),还鞋的在第一个+租鞋的在第一个

#include <iostream>
using namespace std;

int DFS(int m,int n)
{
	if(m<n)
		return 0;
	if(n==0)
		return 1;
	return DFS(m-1,n)+DFS(m,n-1);
}

int main()
{
	int m,n;
	cin>>m>>n;
	cout<<DFS(m,n);
	return 0;
}