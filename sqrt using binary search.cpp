#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int beg=0;
	int end=n-1,ans;
	while(beg<=end){
		int mid=(beg+end)/2;
		if(n==mid*mid)
		{
			//cout<<"Square root is "<<mid;
			ans=mid;
			break;
		}
		else if(mid*mid>n)
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
			ans=mid;
		}
	}
	cout<<ans;
}
