// In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll t, n, s, b;

    cin >> t;

    while (t--)
    {
        s = 1;
        b = 1;
        cin >> n;
        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for (ll i = 1; i < n; i++)
        {
            if (v[i] == v[0])
                s++;
            else
                break;
        }
        for (ll i = n - 2; i >= 0; i--)
        {
            if (v[i] == v[n - 1])
                b++;
            else
                break;
        }

        if (b == n)
            cout << n * (n - 1) << endl;
        else
            cout << (s * b * 2) << endl;
    }
    return 0;
}