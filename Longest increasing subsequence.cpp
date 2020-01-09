//longest increaing  subsequence
#include<bits/stdc++.h>
using namespace std;
int lcs(int *arr,int *dp,int n)//longest  increaing subsequence
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i]>arr[j])
			{
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	int result=1;
	for(int i=0;i<n;i++)
	{
		if(dp[i]>result)
		{
			result=dp[i];
		}
	}
	return result;
}
int main()
{
	int n;
	cin>>n;
	int *arr=new int [n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int *dp=new int [n];
	for(int i=0;i<n;i++)
	{
		dp[i]=1;
	}
	cout<<lcs(arr,dp,n);
}
