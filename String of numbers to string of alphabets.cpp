//String of numbers to string of alphabets
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void codes(string str,string osf,char *arr)
{
	if(str.size()==0){
		cout<<osf<<endl;
		return;
		
	int one=str[0]-'0';
	int two=0;
	if(str.size()>=2)
	{
		two=stoi(str.substr(0,2));
		codes(str,substr(1),osf+arr[one],arr);
		if(two<=26)
		{
			codes(str.substr(2),osf+arr[two],arr);
		}
	}
	else
	{
		codes(str.substr(1),osf+arr[one],arr);
	}
	}
}
int main()
{
	char arr[27]={'#','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	codes("1125","");
}
