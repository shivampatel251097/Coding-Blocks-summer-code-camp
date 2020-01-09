#include<bits/stdc++.h>
using namespace std;
int *passingarray(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		arr[i]=arr[i]+1;
	}
	return arr;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int *ptr=passingarray(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<ptr[i]<<" ";
	}
}
