//Method to find all divisors of a number
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	/*
	//Method-1:-
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}
	Method 2:-
	*/
	vector<int> v;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				cout<<i<<" ";
			}
			else
			{
				cout<<i<<" ";
				v.push_back(n/i);
			}
		}
	}
	for(int i=v.size()-1;i>=0;i--)
	{
		cout<<v[i]<<" ";
	}
}
