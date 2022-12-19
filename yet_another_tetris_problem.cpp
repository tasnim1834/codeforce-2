#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, n, od, ev;
    cin >> t;

    while (t--)
    {
        od = 0;
        ev = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if (v[i] % 2 == 0)
                ev++;
            else
                od++;
        }

        if (od > 0 && ev > 0)
            cout << "NO"
                 << "\n";
        else
            cout << "YES"
                 << "\n";
    }
    return 0;
}