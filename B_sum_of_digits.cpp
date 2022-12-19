// In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    string s;

    cin >> s;


    int ct = 0;

    while (s.size() != 1)
    {
            int z = 0;
        for (int i = 0; i < s.size(); i++)
        {
            z = z + s[i] - '0';
        }
        ct++;
        s = to_string(z);
    }
    cout << ct;

    return 0;
}