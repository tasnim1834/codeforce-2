#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base :: sync_with_stdio(0);
cin.tie(0);
  int t,n,f,count,round,q,a,r,i;
    cin>>t;

    while(t--){
        count=0;
        q=0;
        a=0;
        round=0;
         cin>>n;
         string s;
         cin>>s;
           
           if(s[n-1]=='Q'){
            cout<<"No"<<endl;
           }
           else{
            for( i=n-2;i>=0;i--){
                if(s[i]=='A') round++;
                 else{
                    f=i;
                    break;
                 }
                }
            for(int i=f;i>=0;i--) {
                if(s[i]=='Q')count++;
                else{
                    r=i;
                    break;
                }
            } 
            
            for( i=r;i>=0;i--){
                if(s[i]=='A'){ a++;
                }
                else {
                    q++;}
            }  

            if(count>(round+1)){
             cout<<"No"<<endl;
             }
            else{
                if(q>a){
                    cout<<"No"<<endl;
                }else{
                    cout<<"Yes"<<endl;
                }
            }

            }
            
           }
 }     



    
    

