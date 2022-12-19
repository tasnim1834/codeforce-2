#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base :: sync_with_stdio(0);
cin.tie(0);
int n,a,b,c,i,d,min,z;
a=0; b=0,c=0;d=0; 
cin>>n;
    vector<int>v(n);

    for( i=0;i<n;i++){
        cin>>v[i];
         b=b+v[i];
        if(v[i]==4){
            d++;
        }
         
    }
    sort(v.rbegin(),v.rend());

    for(int i=n;i>0;i--){
        for(int j=d;j<n;j++){
        if(v[i]+v[j]==4){
            c++;
        }
        }
 }

     a=d+c;

     z=b-(a*4);
   
    
        }
        

        
   

        
     
    