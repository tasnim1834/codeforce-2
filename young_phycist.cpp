#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base :: sync_with_stdio(0);
cin.tie(0);
int n,a,b,c,d,e,f;
d=0;e=0;f=0;
cin>>n;



 while(n--){
  cin>>a>>b>>c;
   d=d+a;
   e=e+b;
   f=f+b;
 }

 if(d==0 && e==0 && f==0) cout<<"YES";
 else cout<<"NO";


return 0;
}