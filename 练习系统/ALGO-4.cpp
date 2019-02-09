#include <iostream>
#include <vector>
using namespace std;

int dp[100001][2];
vector<vector<int> > v;

void DFS(int node,int pre)
{
	for(int i=0;i<v[node].size();i++)//node的相邻节点
	{
        int temp=v[node][i];
        if(temp!=pre)
        {
        	DFS(temp,node);
    		dp[node][0]+=max(dp[temp][0],dp[temp][1]);//不取当前点，则取与它相邻点的最大值进行累加
    		dp[node][1]+=dp[temp][0];//如果取当前点，则不能取与它相邻的任何点
		}
	}
}

int main()
{
	int n,a,b;
	cin>>n;
	for(int i=1;i<=n;i++)
        cin>>dp[i][1];
    v.resize(n+1);
    for(int i=1;i<=n-1;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);//无向图
    }
    DFS(1,0);
    cout<<max(dp[1][0],dp[1][1]);//从底向上累加到顶部,max(dp[1][0],dp[1][1])就是所求结果
	return 0;
}