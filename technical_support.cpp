#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base :: sync_with_stdio(0);
cin.tie(0);
  int t,n,q,a;
  cin>>t;

    while(t--){
         a=0; q=0;
         cin>>n;
         string s;
         cin>>s;

         for(int i=0;i<n;i++){
            
            if(s[i]=='Q') q++;
            else{
                a++;
                if(a>q) a=q;
            }
         }
         if(a==q){
            cout<<"Yes\n";
         }else{
            cout<<"No\n";
         }
           
           }
         }     



    
    

