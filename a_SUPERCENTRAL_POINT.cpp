
#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        v.push_back({x, y});
    }

    int c = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
        int up = 0, down = 0, right = 0, left = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j].first == v[i].first)
            {
                if (v[j].second < v[i].second)
                {
                    left++;
                }
                else if (v[j].second > v[i].second)
                {
                    right++;
                }
            }
            else if (v[j].second == v[i].second)
            {
                if (v[j].first > v[i].first)
                {
                    up++;
                }
                else if (v[j].first < v[i].first)
                {
                    down++;
                }
            }
        }
        if (up && down && left && right)
        {
            flag++;
        }
    }

    cout << flag << endl;
    return 0;
}