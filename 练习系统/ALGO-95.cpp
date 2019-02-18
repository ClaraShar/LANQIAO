#include <iostream>
using namespace std;

void DFS(int num,int n)//num为当前数，n为几次方
{
    if(num==0)
    	return;//结束条件，分解结束 
    int r=num%2;//最后一位取出来 
    num=num>>1;//右移一位 
    DFS(num,n+1);//下一位次方+1 
    if(num&&r)
    	cout<<"+";//前面和当前位非0的时候输出'+'号//？
    if(r)
    {//当前最后一位非0，那么输出对应的表示 
        if(n==1)
            cout<<"2";
        else
        {
            cout<<"2(";
            if(n==0)
            	cout<<"0";
            else
            	DFS(n,0);//次方大于等于2时，继续分解 
            cout<<")";
        }
    }
}

int main()
{
	int n;
	cin>>n;
	DFS(n,0);
	return 0;
}