// #include <iostream>
// #include <string.h>
// #include <algorithm>
// using namespace std;

// string s;

// void f(int i)
// {
// 	switch(i)
// 	{
// 		case 0:
// 			s+=i+48;
// 			reverse(s.begin(),s.end());
// 			break;
// 		case 1:
// 			s+=i+48;
// 			reverse(s.begin(),s.end());
// 			break;
// 		case 2:
// 			s+=i+48;
// 			reverse(s.begin(),s.end());
// 			break;
// 		case 3:
// 			s+=i+48;
// 			reverse(s.begin(),s.end());
// 			break;
// 		case 4:
// 			s+=i+48;
// 			reverse(s.begin(),s.end());
// 			break;
// 		case 5:
// 			s+=i+48;
// 			reverse(s.begin(),s.end());
// 			break;
// 		case 6:
// 			s+=i+48;
// 			reverse(s.begin(),s.end());
// 			break;
// 		case 7:
// 			s+=i+48;
// 			reverse(s.begin(),s.end());
// 			break;
// 		case 8:
// 			s+=i+48;
// 			reverse(s.begin(),s.end());
// 			break;
// 		case 9:
// 			s+=i+48;
// 			reverse(s.begin(),s.end());
// 			break;
// 		case 10:
// 			s='A'+s;
// 			break;
// 		case 11:
// 			s='B'+s;
// 			break;
// 		case 12:
// 			s='C'+s;
// 			break;
// 		case 13:
// 			s='D'+s;
// 			break;
// 		case 14:
// 			s='E'+s;
// 			break;
// 		case 15:
// 			s='F'+s;
// 			break;
// 	}
// }

// int main()
// {
// 	int num,a;
// 	cin>>num;
// 	while(num)
// 	{
// 		a=num%16;
// 		f(a);
// 		num/=16;
// 	}
// 	cout<<s;
// 	return 0;
// }

#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   printf("%X",n);
   return 0;
}