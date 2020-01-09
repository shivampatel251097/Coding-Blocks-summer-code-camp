#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int freq[26]={0},i;
	for(i=0;i<s.length();i++)
	{
		freq[s[i]-'a']++;
	}
	for(i=0;i<s.size();i++)
	{
		if(freq[s[i]-'a']!=0)
		cout<<s[i]<<freq[s[i]-'a']<<" ";
		freq[s[i]-'a']=0; //making it 0 so that it cant print again
	}
}
