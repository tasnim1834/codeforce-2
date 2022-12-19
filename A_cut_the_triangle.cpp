// In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    int x, y;

    vector<pair<int, int>> v(3);
    while (t--)
    {

        for (int i = 0; i < 3; i++)
        {
            cin >> x >> y;
            v[i] = {x, y};
        }

        int ct = 0;
        //  for (int r = 0; r <2; r++)

        if ((v[0].first == v[1].first) || (v[0].second == v[1].second))
        {
            ct++;
        }
        if ((v[1].first == v[2].first) || (v[1].second == v[2].second))
            ct++;

        if (((v[0].first == v[2].first) || (v[0].second == v[2].second)))
            ct++;

        if (ct == 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}