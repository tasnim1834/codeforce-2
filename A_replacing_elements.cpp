// In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, n, d,ct;
    cin >> t;
    while (t--)
    {   
        ct=0;
        cin >> n >> d;
         
        vector<int>v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>d) ct++;

        }
        if(ct==0) cout<<"YES"<<endl;
        else{
            sort(v.begin(),v.end());

            int z= v[0]+v[1];

            if(z<=d) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}