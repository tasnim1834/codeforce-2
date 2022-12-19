// In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include <bits/stdc++.h>
using namespace std;

bool check_ps(int n)
{
    int x = sqrt(n);
    double y = sqrt(n);
    if ((double)y - (double)x == 0)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, x, y;

    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x == 0 && y == 0)
            cout << 0 << endl;
        else if (check_ps((x * x) + (y * y)) == 1)
        {
            cout << 1 << endl;
        }
        else
            cout << 2 << endl;
    }
    return 0;
}