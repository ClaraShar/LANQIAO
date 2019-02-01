#include <iostream>
#include <string.h>
using namespace std;

string s;

void f(int i)
{
	switch(i)
	{
		case 0:
			s=to_string(i)+s;
			break;
		case 1:
			s=to_string(i)+s;
			break;
		case 2:
			s=to_string(i)+s;
			break;
		case 3:
			s=to_string(i)+s;
			break;
		case 4:
			s=to_string(i)+s;
			break;
		case 5:
			s=to_string(i)+s;
			break;
		case 6:
			s=to_string(i)+s;
			break;
		case 7:
			s=to_string(i)+s;
			break;
		case 8:
			s=to_string(i)+s;
			break;
		case 9:
			s=to_string(i)+s;
			break;
		case 10:
			s='A'+s;
			break;
		case 11:
			s='B'+s;
			break;
		case 12:
			s='C'+s;
			break;
		case 13:
			s='D'+s;
			break;
		case 14:
			s='E'+s;
			break;
		case 15:
			s='F'+s;
			break;
	}
}

int main()
{
	int num,a;
	cin>>num;
	while(num)
	{
		a=num%16;
		f(a);
		num/=16;
	}
	cout<<s;
	return 0;
}