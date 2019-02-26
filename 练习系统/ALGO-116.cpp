#include <iostream>
#define max(a,b) a>b?a:b;
using namespace std;

long long int dp[16][16];
int sum[16];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;++i)
	{
		int temp;
		cin>>temp;
		sum[i]=sum[i-1]+temp;
	}
	for(int i=1;i<=n;++i)
		dp[i][0]=sum[i];
	for(int i=1;i<=n;++i)//前i个数
		for(int j=1;j<=k&&j<=i-1;++j)//乘号的个数
			for(int t=2;t<=i;++t)//乘号的位置，在第t个数前面
				dp[i][j]=max(dp[i][j],dp[t-1][j-1]*(sum[i]-sum[t-1]));
	cout<<dp[n][k];
	cin>>n;
	return 0;
}