#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){

   int n,m;
   ll sum=0;

   cin>>n>>m;

   int ar[m];

   for(int i=0;i<m;i++){
    cin>>ar[i];

   }

   sum=ar[0]-1;
 
    for(int i=0;i<m-1;i++){
        if(ar[i+1]>=ar[i]){
            sum=sum+ar[i+1]-ar[i];
        }
        else{
            sum=sum+n-ar[i]+ar[i+1];
        }

    }

  cout<<sum;



}
  