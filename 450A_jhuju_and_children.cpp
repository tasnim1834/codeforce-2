// In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, m;

    cin >> n >> m;

    vector<int> v(n);

    int t;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int max = *max_element(v.begin(), v.end());

    int p = ceil((float)max / (float)m);

    int z = (p - 1) * m;

    for (int i = 0; i < n; i++)
    {
        if (v[i] > z)
        {
            t = i;
            
        }
    }

    cout << t + 1 << endl;
}