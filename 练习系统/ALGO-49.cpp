#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,max=INT_MIN,pos=-1;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	for(int i=0;i<n;++i)
	{
		if(v[i]>max)
		{
			max=v[i];
			pos=i;
		}
	}
	cout<<max<<" "<<pos;
	return 0;
}