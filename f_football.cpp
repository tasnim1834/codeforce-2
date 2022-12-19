// In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, x, y, m;
    cin >> n >> x >> y;

    int z = n - (x + y);
    if (n == 1)
    {
        if (x == y)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        cout << x << ":" << y;
        return 0;
    }
    else if (z > 0)
    {
        m = z;
        cout << z << endl;
    }
    else
    {
        m = 0;
        cout << 0 << endl;
    }

    if (m == 0)
    {
        if (n > x)
        {
            for (int i = 1; i <= x; i++)
            {
                cout << 1 << ":" << 0 << endl;
            }
            for (int i = 1; i < (n - x); i++)
            {
                cout << 0 << ":" << 1 << endl;
            }
            cout << 0 << ":" << 1 + y - (n - x) << endl;
        }
        else
        {
            if (y != 0)
            {
                cout << 0 << ":" << y << endl;
                for (int i = 1; i < n - 1; i++)
                {
                    cout << 1 << ":" << 0 << endl;
                }
                cout << (x - (n - 2)) << ":" << 0 << endl;
            }
            else
            {
                for (int i = 1; i <= n - 1; i++)
                {
                    cout << 1 << ":" << 0 << endl;
                }
                cout << (x - (n - 1)) << ":" << 0 << endl;
            }
        }
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {
            cout << 1 << ":" << 0 << endl;
        }
        for (int i = 1; i <= y; i++)
        {
            cout << 0 << ":" << 1 << endl;
        }

        for (int i = 1; i <= z; i++)
        {
            cout << 0 << ":" << 0 << endl;
        }
    }
    return 0;
}