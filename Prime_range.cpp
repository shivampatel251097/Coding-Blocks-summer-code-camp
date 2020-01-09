#include<bits/stdc++.h>
using namespace std;\
int main()
{
	long long maxx=1000000001;
	bool arr[maxx];
	memset(arr,true,sizeof(arr));
	for(long long i=2;i*i<=maxx;i++)
	{
		if(arr[i]){
			for(long long j=i*i;j<=maxx;j=j+i)
			{
				arr[j]=false;
			}
		}
	}
	arr[0]=false;
	arr[1]=false;
	long long t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		for(long i=n;i<=m;i++)
		{
			if(arr[i])
			{
				cout<<i<<" ";
			}
		}
		cout<<endl;
}
}