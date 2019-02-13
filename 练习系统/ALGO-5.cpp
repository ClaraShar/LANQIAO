#include <iostream>
using namespace std;

int main()
{
	int n,m,inf=99999999,dis[20001]={0},u[200001],v[200001],w[200001];//dis[i]代表第一点到第i点距离，u[i]，v[i],w[i]分别代表第i条边的起始点，终点和长度。
	cin>>n>>m;
	fill(dis+2,dis+20001,inf);
	for(int i=1;i<=m;i++)
		cin>>u[i]>>v[i]>>w[i];
	for(int i=1;i<=n-1;i++)
	{
        int check=0;
        for(int j=1;j<=m;j++)
        {
            if(dis[v[j]]>dis[u[i]]+w[i])
            {
                dis[v[j]]=dis[u[j]]+w[j];
				check=1;
			}
		}
        if(check==0)
        	break;
    }
    for(int i=2;i<=n;i++)
        cout<<dis[i];
	return 0;
}