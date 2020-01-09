#include <bits/stdc++.h>
#include<string.h>
using namespace std;
void replacingpi(string s, string osf) {
	if(s.length() == 0) {
		cout<<osf<<endl;
		return;
	}
	if(s[0] != 'p') {
		char ch = s[0];
		replacingpi(s.substr(1), osf+ch);
	} else if(s[0] == 'p') {

		if(s.length() >= 2 and s[1] == 'i') {
			replacingpi(s.substr(2), osf+"3.14");
		} else {
			char ch=s[0];
			replacingpi(s.substr(1), osf+ch);
		}
	}
}
int main()
{
    int t;
    cin>>t;
    while(t--){
	
	string s;
	cin>>s;
	replacingpi(s, "");
}
}
