//In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base :: sync_with_stdio(0);
cin.tie(0);
int t,x,y;
cin>>t;

while(t--){
    cin>>x>>y;

    if(x>=y) cout<<"YES"<<endl;

    else{
        if(x==1 || x==3 ||((x==2)&& (y>3))) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
return 0;
}