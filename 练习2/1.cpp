#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,index=0;
	vector<int> nums;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		nums.push_back(temp);
	}
	cin>>n;
	if(n==-1)
	{
		for(int i=index;i<nums.size();i++)
		{
			if(nums[i]!=nums[index])
			{
				index++;
				nums[index]=nums[i];
			}
		}
		for(int i=0;i<index;i++)
			cout<<nums[i]<<" ";
		cout<<nums[index];
	}
	return 0;
}