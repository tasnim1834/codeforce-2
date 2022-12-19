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

    int rt = 0;
    vector<int> v(t);

    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < t - 2;)
    {
        if (v[i] == 1 && v[i + 1] == 0 && v[i + 2] == 1)
        {
            rt++;
            i = i + 3;
        }
        else
            i++;
    }

    cout << rt;
    return 0;
}