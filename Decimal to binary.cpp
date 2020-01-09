//Decimal to binary conversion
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int binary[32],i=0;
	while(n>0)
	{
		binary[i]=n%2;
		n/=2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<binary[j];
	}
	int len=1;
	for(int j=0;j<i;j++)
	{
		int max=0;
		
	}
}
