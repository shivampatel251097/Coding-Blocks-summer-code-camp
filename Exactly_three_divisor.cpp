// Exaxtly 3 divisor up to 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int max=100001;
	bool arr[max];
	int sieve_count[max]={};
	memset(arr,true,sizeof(arr));
	for(int i=2;i*i<=max;i++)
	{
		if(arr[i]){
			for(int j=i*i;j<=max;j=j+i)
			{
				arr[j]=false;
			}
		}
	}
	sieve_count[0]=0;
	sieve_count[1]=0;
	for(int i=2;i<max;i++)
	{
	    if(arr[i])
	    {
	        sieve_count[i]=sieve_count[i-1]+1;
	    }
	    else{
	        sieve_count[i]=sieve_count[i-1];
	    }
	}
	int k=sqrt(n);
	cout<<sieve_count[k];
}