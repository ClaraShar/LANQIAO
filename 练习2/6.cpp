#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,cnt=0;
	cin>>n;
	vector<pair<int,int>> nums;
	for(int i=0;i<n;i++)
	{
		int first,second;
		cin>>first>>second;
		nums.push_back(make_pair(first,second));
	}
	for(int i=0;i<nums.size()-1;i++)
	{
		int j=i+1,k=nums.size()-1;
		while(j<k)
		{
			if((nums[i].first+nums[j].first)==(nums[i].second+nums[j].second))
		 		cnt++;
		 	if((nums[i].first+nums[k].first)==(nums[i].second+nums[k].second))
		 		cnt++;
		 	j++;
		 	k--;
		}
		if(j==k&&(nums[i].first+nums[j].first)==(nums[i].second+nums[j].second))
			cnt++;
	}
	cout<<cnt;
	return 0;
}