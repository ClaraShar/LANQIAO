#include <iostream>
using namespace std;

bool prime(int n)//判断是否为素数
{
	if(n<2)
		return false;
    int i;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
	int i=2,j,n,sum=0,res=1;
    bool p[100001]={0};
    cin>>n;
    while(sum<n)
    {
        if(!p[i]&&prime(i))
        {    //判断该数i是否为素数
            res=res*i%50000;
            sum++;
        }
       	for(j=i+i;j<=100000;j+=i)//筛法求素数,不管一个数是不是素数，他的倍数一定不是素数
           	p[j]=true;
        i++;
    }
    cout<<res<<endl;
    return 0;
}