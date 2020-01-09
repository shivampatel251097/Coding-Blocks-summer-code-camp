#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	bool arr[n];
	memset(arr,true,sizeof(arr));
	for(int i=2;i*i<=n;i++)
	{
		if(arr[i]){
			for(int j=i*i;j<=n;j=j+i)
			{
				arr[j]=false;
			}
		}
	}
	while(n--){
		int k,count=0,p;
		cin>>k;
	for(int i=2;i<=n;i++)
	{
		if(arr[i])
		{
			count++;
			if(count==k)
			{
				p=i;
				break;
			}
		}
	}
	cout<<p<<endl;
}
}