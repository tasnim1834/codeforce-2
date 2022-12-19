// In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, l;
    cin >> n;
    int k = n;
    int h[1001] = {0};
    while (n--)
    {
        cin >> l;
        h[l] += 1;
    }
 
    int height = *max_element(h, h + 1001);
    int number = 1001 - count(h, h + 1001, 0);
 
    cout << height << " " << number << endl;
 
    return 0;
}