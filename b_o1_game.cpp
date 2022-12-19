// In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t,c;
    string s;
    cin >> t;
    while (t--)
    {   
        c=0;
        cin >> s;

        for(int i=0;i<s.length()-1;){
            if(s[i]!=s[i+1]) {
                c++;
                i=i+2;
        }else{
            i++;   
        }
    }
    if(c%2!=0 && c>0)cout<<"DA"<<endl;
    else cout<<"NET"<<endl;
}

}