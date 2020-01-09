//Limited budget party
#include<bits/stdc++.h>
using namespace std;
void party(int n,int x,int *arr)
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=i;j<n;j++)
		{
			sum=sum+arr[j];
			if(sum==x)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag){
	cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int *arr=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		party(n,x,arr);
	}
}
