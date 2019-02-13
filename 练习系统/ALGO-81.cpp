#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int n,avg=0;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
		avg+=temp;
	}
	cout<<avg<<" "<<avg/n;
	cin>>n;
	return 0;
}