#include<bits/stdc++.h>
using namespace std;
stack <string> st;

void subsequence(string s,string osf)
{
	int l=s.length();
	//base
	if(l==0)
	{
		st.push(osf);
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
    while (!st.empty()) { 
        cout<< st.top()<<" "; 
        st.pop();
}
cout<<pow(2,s.size())<<endl;
}
