#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, j, t;
    cin >> n;
    j = 0;
    t = 0;
    vector<int> v(n);
    if (n%2 !=0)
        cout << -1;

    else
    {
        for (int i = n, j = 0; i > 0, j < n; i--, j++)
        {
            t++;
            v[j] = i;

            if (v[j] == t)
            {
                swap(v[j], v[j - 1]);
            }
        }
        for (int i = 0; i < n; i++)
        {

            cout << v[i] << " ";
        }
    }
    return 0;
}