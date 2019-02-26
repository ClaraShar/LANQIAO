//Bellman-Ford算法（运行超时）
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int u[200001],v[200001],w[200001],dis[20001];
	memset(dis,10001,sizeof(dis));
	dis[1]=0;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;++i)
		cin>>u[i]>>v[i]>>w[i];
	for(int i=1;i<n;i++)
	{
		int check=0;//添加check变量量判断本轮是否进⾏松弛了，如果未进行松弛则可以提前退出循环(否则会超时)
        //只有上一次迭代中松弛过的点才有可能参与下一次迭代的松弛操作
		for(int j=1;j<=m;++j)
			if(dis[v[j]]>dis[u[j]]+w[j])
			{
				dis[v[j]]=dis[u[j]]+w[j];
				check=1;
			}
		if(check==0)
			break;
	}
	for(int i=2;i<=n;i++)
		cout<<dis[i]<<endl;
	return 0;
}
