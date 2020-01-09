//longest pallindromic subsequence in string
#include<bits/stdc++.h>
using namespace std;
int longestrepeatingsubsequence(string str)
{
	int **dp=new int *[str.size()];
	for(int i=0;i<str.size();i++)
	{
		dp[i]=new int [str.size()];
	}
	int n=str.length();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			dp[i][j]=0;
		}
	}
	//base case
	for(int i=0;i<n;i++)
	{
		dp[i][i]=1;
	}
	for(int len=2;len<=n;len++)
	{
		for(int i=0;i<=n-len;i++)
		{
			int j=i+len-1;
			if(str[i]==str[j] and len ==2)
			{
				dp[i][j]=2;
			}
			else if(str[i]==str[j])
			{
				dp[i][j]=dp[i+1][j-1]+2;
			}
			else
			{
				dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
			}
		}
	}
	return dp[0][n-1];
}
int main()
{
	string str;
	cin>>str;
	cout<<longestrepeatingsubsequence(str);
}
