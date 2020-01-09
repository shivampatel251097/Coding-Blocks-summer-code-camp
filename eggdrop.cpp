//Error dropping problem
#include<bits/stdc++.h>
using namespace std;
int eggdrop(int n,int k)
{
	int dp[n+1][k+1];
	for(int i=0;i<=k;i++)
	{
		dp[0][i]=0;
	}
	for(int i=0;i<=k;i++)
	{
		dp[1][i]=i;
	}
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=0;
	}
	for(int i=0;i<=n;i++)
	{
		dp[i][1]=1;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=k;j++)
		{
			dp[i][j]=INT_MAX;
			for(int x=1;x<=j;x++)
			{
				int result=1+max(dp[i-1][x-1],dp[i][j-x]);
				if(result<dp[i][j])
				{
					dp[i][j]=result;
				}
			}
		}
	}
	return dp[n][k];
}
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<eggdrop(n,k);
}
