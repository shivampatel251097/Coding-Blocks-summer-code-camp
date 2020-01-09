#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5];
	int m=0;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
		m=max(m,a[i]);
	}
	cout<<m;
}
