#include<bits/stdc++.h>
using namespace std;

class triplet{
    public:
    int x,y,gcd;
};

triplet extendedEuclid(int a,int b){

    if(b==0)
    {
        triplet base;
        base.gcd=a;
        base.y=0;
        base.x=1;
        return base;
    }

    triplet recursionAns =extendedEuclid(b,a%b);
    triplet result;
    result.x=recursionAns.y;
    result.y=recursionAns.x-((a/b)*recursionAns.y);
    result.gcd=recursionAns.gcd;
    return result;
}

int main(){
    triplet ans=extendedEuclid(10,4);
    cout<<ans.gcd<<" "<<ans.x<<" "<<ans.y<<endl;
}