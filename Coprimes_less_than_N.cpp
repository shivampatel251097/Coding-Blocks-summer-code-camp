#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int *arr=new int [n+1];
	for(int i=0;i<=n;i++)
	{
		arr[i]=i;
	}
	for(int i=2;i<=n;i++) {
		if(arr[i]==i){
			for(int j=i*2;j<=n;j+=i) {
			arr[j]=(arr[j]*(i-1))/(i);
		}
		arr[i]--;
		}
	}
	for(int i=0;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
} 