#include<bits/stdc++.h>
using namespace std;
int count(int k,string s)
{
    int l=s.length(),counta=0,countb=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            counta++;
        }
        else
        {
            countb++;
        }
    }
    if(counta==0 or countb==0)
    {
    	return l;
	}
    else if(counta>=countb)
    {
        if(k<=countb)
        {
        	return counta+k;
		}
		else
		return l;
    }
    else if(countb>counta)
    {
        if(k<=counta)
        {
        	return countb+k;
		}
		else
		return l;
    }
}
int main()
{
    int k;
    string s;
    cin>>k>>s;
    cout<<count(k,s);
}
