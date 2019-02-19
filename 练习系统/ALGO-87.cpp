#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int l;
	cin>>l;
	string s;
	cin>>s;
	vector<string> v;
	for(int i=l;i<=s.length();i++)
		for(int j=0;j<=s.length()-i;j++)
            v.push_back(s.substr(j,i));
    
    vector<int> book(v.size());
    for(int i=0;i<v.size();i++)
        for (int j=0;j<v.size();j++)
            if(i!=j&&v[i]==v[j])
                book[i]++;

    int pos=0,max=0;
    for(int i=0;i<v.size();i++)
        if (book[i]>max||(book[i]==max&&v[pos].length()<v[i].length()))
        {
            pos=i;
            max=book[i];
        }
    cout<<v[pos];
	return 0;
}