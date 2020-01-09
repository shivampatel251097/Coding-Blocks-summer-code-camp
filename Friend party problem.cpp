//A boy want to go in party he can go alone or in pair so total no. of valid combination?
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int friends(int n)
{
	if(n==0 or n==1) return 1;
	if(n==2) return 2;
	return friends(n-1)+(n-1)*friends(n-2);
}
int main()
{
	int  s;
	cin>>s;
	cout<<friends(s);
	return 0;	
}
