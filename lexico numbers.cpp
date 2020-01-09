//Lexographical numbers upto particular number
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void lexico(int n,int limit)
{
	if(n>limit) return;
	if(n==limit) 
	{
		cout<<n<<endl;
		return ;
	}
	cout<<n<<endl;
	for(int i= (n==0)?1:0;i<=9;i++)
	{
		lexico(10*n+i,limit);
	}
}
int main()
{
	int  s;
	cin>>s;
	lexico(0,s);
	return 0;
	
}
