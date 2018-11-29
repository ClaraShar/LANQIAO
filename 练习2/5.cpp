#include <iostream>
#include <vector>
#include <string>
using namespace std;

string trans(string old_name)
{
	int pos=-1;
	if(old_name.find('_')!=-1)//蛇形
	{
		pos=old_name.find('_');
		old_name.erase(pos,1);
		old_name[pos]-=32;
	}
	else
	{
		for(int i=0;i<old_name.length();i++)
		{
			if(old_name[i]<97)
			{
				old_name[i]+=32;
				old_name.insert(i,"_");
			}
		}

	}
	return old_name;
}

int main()
{
	int n;
	vector<string> names;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string temp;
		cin>>temp;
		names.push_back(temp);
	}
	transform(names.begin(),names.end(),names.begin(),trans);
	for(int i=0;i<names.size();i++)
		cout<<names[i]<<endl;
	return 0;
}