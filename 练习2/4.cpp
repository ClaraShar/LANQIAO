#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N,result=0;
	cin>>N;
	vector<int> total;
	int nums[N][N];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
			cin>>nums[j][i];
	}
	for(int i=0;i<N;i++)
	{
		int sum=0;
		for(int j=0;j<N;j++)
			sum+=nums[i][j];
		total.push_back(sum);
	}
	sort(total.begin(),total.end());
	while(total[0]+total[1]<0)
	{
		total[0]=total[0]*(-1);
		total[1]=total[1]*(-1);
		sort(total.begin(),total.end());
	}
	for(int i=0;i<N;i++)
		result+=total[i];
	cout<<result;
	cin>>result;
	return 0;
}

/*
https://blog.csdn.net/SixWings0104/article/details/81144596
*/