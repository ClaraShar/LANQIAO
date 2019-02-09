#include <iostream>
using namespace std;

int main()
{
    int l,k;
    long long sum=0;
    long long int a[111][111]={0};
    cin>>k>>l;
    for(int i=0;i<k;i++)
        a[1][i]=1;
    for(int i=2;i<=l;i++)
        for(int j=0;j<k;j++)
            for(int u=0;u<k;u++)
                if(u!=j-1&&u!=j+1)
                {
                    a[i][j]+=a[i-1][u];
                    a[i][j]%=1000000007;
                }
    for(int u=1;u<k;u++)
    {
        sum+=a[l][u];
        sum%=1000000007;
    }
    cout<<sum;
    return 0;
}