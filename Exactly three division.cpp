#include<bits/stdc++.h>
using namespace std;
int exactly3Divisors(int n)
{
    int ans=0;
    for(int i=4;i<=n;i++)
    {
        int count=0;
        for(int j=2;j<n-1;j++)
        {
            if(i%j==0)
            {
                count++;
                if(count==2){
                	count=0;
					break;
				}
            }
        }
        if(count==1)
        {
           ans=ans+count;
        }
        
    }
    return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<exactly3Divisors(n);
}
