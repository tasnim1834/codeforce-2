// In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t,m;
    vector<int> v(3);

    cin >> t;
    while (t--)
    {
       for(int i=0;i<3;i++){
        cin>>v[i];
       }

        sort(v.begin(), v.end());
        m = v[2];

        

        if ((v[0] != v[1]) && (v[1] != v[2]))
        {
            if (m == (v[1] + v[0]))
                cout << "YES"
                     << "\n";
            else
                cout << "NO"
                     << "\n";
        }
        else
        {
            if (v[0] == v[1])
            {
                if (v[2] % 2 == 0)
                    cout << "YES"
                         << "\n";
                else
                    cout << "NO"
                         << "\n";
            }
            else if (v[0] == v[2])
            {
                if (v[1] % 2 == 0)
                    cout << "YES"
                         << "\n";
                else
                    cout << "NO"
                         << "\n";
            }
            else
            {
                if (v[0] % 2 == 0)
                    cout << "YES"
                         << "\n";
                else
                    cout << "NO"
                         << "\n";
            }
        }
    }
    return 0;
}