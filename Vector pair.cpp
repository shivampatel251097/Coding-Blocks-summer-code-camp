#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int p,d;
        cin>>p>>d;
        v.push_back( make_pair(p,d) );
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" ";
        cout<<v[i].second<<endl;
    }
    
}
