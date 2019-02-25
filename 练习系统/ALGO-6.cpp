//结果直接在最小生成树的结果加一个最小结点的权值即可。
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int N,P,node[10001],f[10001],MIN=INT_MAX;//顶点的权值、判断连通性
struct edge{
	int x,y,d;//x、y、x到y结点间距离 
}e[100001];

bool cmp(edge e1,edge e2)
{
	return e1.d<e2.d;
}

int find(int x)
{
	return f[x]==x?x:f[x]=find(f[x]);//寻找掌门ing
	/*
	int root=x,temp;
	while(root!=f[root])
		root=f[root];
	while(x!=root)//他自己不是掌门的时候
	{
		temp=f[x];//记录他之前的上级（顺藤摸瓜）
		f[x]=root;
		x=temp;
	}
	return x;
	*/
}

int Kruskal()
{
	int res=0;
	sort(e+1,e+P+1,cmp);
	for(int i=1;i<=P;i++)
	{
		int xx=find(e[i].x);
		int yy=find(e[i].y);
		if(xx!=yy)//掌门不同？踢馆！~
		{ 
			f[xx]=yy;//合并boss
			res+=e[i].d;  
		}
	}
	return res;
}

int main()
{
	// memset(node,0,sizeof(node));//全局变量的默认值为0，局部变量为随机值
	cin>>N>>P;
	for(int i=1;i<=N;++i)
	{
		cin>>node[i];
		if(node[i]<MIN)
			MIN=node[i];
	}
	for(int i=1;i<=P;++i)
	{
		cin>>e[i].x>>e[i].y>>e[i].d;
		e[i].d=2*e[i].d+(node[e[i].x]+node[e[i].y]);//把每条边的权值更新为本身的二倍再加上他所连接的两个结点的权值。
	}
	f[0]=0;
	for(int i=1;i<=N;i++)
		f[i]=i;
	cout<<MIN+Kruskal();
	return 0;
}