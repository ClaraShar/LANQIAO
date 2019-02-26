#include <iostream>
#define max(a,b) a>b?a:b;
using namespace std;

struct node
{
	int l;
	int r;
	int max;
	int sum;
}a[1000000];

void init(int l,int r,int i)//i为树节点编号
{
	a[i].l=l;
	a[i].r=r;
	a[i].sum=0;
	a[i].max=0;
	if(l!=r)
	{
		int mid=(l+r)/2;
		init(l,mid,i*2);
		init(mid+1,r,i*2+1);
	}
}

void insert(int i,int j,int value)//i为树节点编号，j为格子编号
{
	if(a[i].l==a[i].r)
	{
		a[i].max=value;
		a[i].sum=value;
		return;
	}
	int mid=(a[i].l+a[i].r)/2;
	if(j<=mid)
		insert(i*2,j,value);
	else
		insert(i*2+1,j,value);
	a[i].max=max(a[i*2].max,a[i*2+1].max);
	a[i].sum=a[i*2].sum+a[i*2+1].sum;
}

int find_max(int i,int x,int y)
{
	if(a[i].l==x&&a[i].r==y)
		return a[i].max;
	int mid=(a[i].l+a[i].r)/2;
	if(y<=mid)
		return find_max(i*2,x,y);
	else if(x>mid)
		return find_max(i*2+1,x,y);
	else
        return max(find_max(2*i,x,mid),find_max(2*i+1,mid+1,y));
}

int find_sum(int i,int x,int y)
{
	if(a[i].l==x&&a[i].r==y)
		return a[i].sum;
	int mid=(a[i].l+a[i].r)/2;
	if(y<=mid)
		return find_sum(i*2,x,y);
	else if(x>mid)
		return find_sum(i*2+1,x,y);
	else
        return find_sum(2*i,x,mid)+find_sum(2*i+1,mid+1,y);
}

int main()
{
	int n,m;
	cin>>n>>m;
	init(1,n,1);
	for(int i=1;i<=n;++i)
	{
		int value;
		cin>>value;
		insert(1,i,value);
	}
	for(int i=1;i<=m;++i)
	{
		int p,x,y;
		cin>>p>>x>>y;
		if(p==1)
			insert(1,x,y);
		else if(p==2)
			cout<<find_sum(1,x,y)<<endl;
		else if(p==3)
			cout<<find_max(1,x,y)<<endl;
	}
	cin>>n;
	return 0;
}