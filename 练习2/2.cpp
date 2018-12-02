#include <iostream>
#include <math.h>
using namespace std;

int help[5000000]={0};//help[i]=1表示i能够用两个完全平方数相加而得。
int n;

void init()
{
	for(int i=0;i*i<=n;++i)
		for(int j=0;j*j<=n;++j)
			help[i*i+j*j]=1;
}

int main()
{
	cin>>n;
	init();
	bool flag=false;
	for(int a=0;a*a<=n;++a)
	{
		for(int b=0;b*b<=n;++b)
		{
			if(help[n-a*a-b*b]==0)//如果剩下的差用两个完全平方数不能组合出来就不进行下面的操作
				continue;
			for(int c=0;c*c<=n;++c)
			{
				int temp=n-a*a-b*b-c*c;
				double half=sqrt(temp);
				if(half==int(half))
				{
					cout<<a<<" "<<b<<" "<<c<<" "<<half;
					flag=true;
					break;
				}
			}
			if(flag)
				break;
		}
		if(flag)
			break;
	}
	return 0;
}

/*
https://blog.csdn.net/luoluozlb/article/details/51339287
*/