#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,num,tmp;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;++i)
	{
		cin>>tmp;
		v.push_back(tmp);
	}
	cin>>num;
	vector<int>::iterator it=find(v.begin(),v.end(),num);
	if(it!=v.end())
		cout<<distance(v.begin(),it)+1;
	else
		cout<<-1;
	return 0;
}