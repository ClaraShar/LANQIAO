#include <iostream>
#include <vector>
using namespace std;

void CompactIntegers(vector<int> &v,int &num)
{
	vector<int>::iterator it=v.begin();
	while(it!=v.end())
	{
		if(*it==0)
			v.erase(it);
		else
			it++;
	}
	num=v.size();
	cout<<num<<endl;
	for(int i=0;i<num;++i)
		cout<<v[i]<<" ";
}
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;++i)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	CompactIntegers(v,n);
	return 0;
}