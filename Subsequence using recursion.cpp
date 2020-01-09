#include<bits/stdc++.h>
using namespace std;
void subsequence(string s,string osf)
{
	int l=s.length();
	//base
	if(l==0)
	{
		cout<<osf<<endl;
		return;
	}
	//Assumption
	char ch=s[0];
	string ros=s.substr(1);//rest of sting=ros
	
	//Self work
	subsequence(ros,osf);
	subsequence(ros,osf+ch);
	
}
int main()
{
	string s;
	cin>>s;
	subsequence(s,"");
	return 0;
	
}
