// Exaxtly 3 dicisor up to 
#include<bits/stdc++.h>
#define max 1000001
using namespace std;
bool arr[max]={};
long long sieve_count[max]={};
int main() {
	int t;
	cin>>t;
	for(int i=2;i*i*i<=max;i++) {
		if(s[i]){
		for(int j=i*i*i;j<=max;j=j+i*i*i) {
			arr[j]=true;
		}
	}
	}
	for(int i=1;i<max;i++) {
	    if(!arr[i]) {
	        sieve_count[i]=sieve_count[i-1]+1;
	    }
	    else {
	        sieve_count[i]=sieve_count[i-1];
	    }
	}
	for(int k=1;k<=t;k++) {
    	int n;
    	cin>>n;
    	if(arr[n]) cout<<"Case "<<k<<": "<<"Not Cube Free"<<endl;
	    else cout<<"Case "<<k<<": "<<sieve_count[n]<<endl;
	} return 0;
} 