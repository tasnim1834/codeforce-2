// In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, k;

    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    if(k==0){
        if(v[k]==1) cout<<"-1"<<endl;
        else cout<<1<<endl;
    }
    else if ((v[k - 1] == v[k]))
        cout << "-1" << endl;
    else
        cout << v[k - 1]  << endl;
    return 0;
}