#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    cout<<ans;
}