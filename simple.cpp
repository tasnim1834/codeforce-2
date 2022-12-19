//In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base :: sync_with_stdio(0);
cin.tie(0);
int t;
cout<<"Enter how many numbers you want to add"<<endl;

cin>>t;
int z;
int sum=0;
for(int i=0;i<t;i++){
   cin>>z;
   sum=sum+z;
}

cout<<"Your sum: ";
cout<<sum;
return 0;
}