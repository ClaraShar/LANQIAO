#include <iostream>
#include <string>
#include <map>
#include <queue>
using namespace std;

map<string,queue<string>> m;
map<string,int> death;

void DFS(string s)
{
	while(!m[s].empty())
	{
		string name=m[s].front();
		if(death[name]!=1)
			cout<<name<<endl;
		DFS(name);
		m[s].pop();
	}

}

int main()
{
	int n;
	string king,tag,father,son,dead;
    cin>>n;
    cin>>king;
    death[king]=1;
    for(int i=0;i<n;++i)
    {
    	cin>>tag;
    	if(tag=="birth")
    	{
    		cin>>father>>son;
    		m[father].push(son);
    	}
    	else if(tag=="death")
    	{
    		cin>>dead;
    		death[dead]=1;
    	}
    }
    DFS(king);
    cin>>n;
	return 0;
}
/*
https://blog.csdn.net/July_xunle/article/details/79822510
*/