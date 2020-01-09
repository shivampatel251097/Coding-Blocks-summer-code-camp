#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int beg=0;
	int end=n-1;
	int k;
	cin>>k;
	while(beg<=end){
		int mid=(beg+end)/2;
		if(k==a[mid])
		{
			cout<<"Found at index "<<mid+1;
			break;
		}
		else if(a[mid]>k)
		{
			end=mid-1;
		}
		else if(a[mid]<k)
		{
			beg=mid+1;
		}
	}
}
