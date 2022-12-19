#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
   int n,t,i,j,count,tount,d1,d2,d3;
   int max=0;
   
 
 cin>>t;
 while(t--){
    count=0;
    tount=0;
        cin>>n;
     int ar[n];
 for( i=0;i<n;i++){
    cin>>ar[i];
}
 
 if(ar[n-1]==1){
    cout<<2*n<<endl;
 
}else{
 
  for( i=n-1;i>0;i-- ){
 
    for(j=n-2;j>=0; ){
    
      if(ar[i]%2==0 && ar[j]%2==0 ){
            j--;
            tount++;
            if(tount==(n-1)){
                cout<<"-1"<<endl;
                count++;
                break;
            }
    }else if((ar[i]%ar[j]==0 || ar[j]%ar[i]==0)&& ar[i]!=1 && ar[j]!=1)
        { j--;
    }else if(((ar[i]%ar[j])==0)||((ar[j]%ar[i])==0))
       { if(ar[i]==1) {
         
         d1= 2*i +2;
         if(d1>max) max=d1;
         count++;
            
 }

       else if(ar[j]==1)
     { d2=i+j+2;
       if(d2>max){
          max=d2;
          count++;
       }
        }
       
        }
      else{
        d3=i+j+2;
        if(d3>max) max=d3;
       count++;
    
       
    }
    
}

 
  
 
}


 
}
cout<<max<<endl;
}
}
