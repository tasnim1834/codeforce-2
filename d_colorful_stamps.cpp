// In The Name Of ALlah, The most Gracious The Most Merciful
#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    string s;
    cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> s;
        int z = s[0]-'0';
       
        for (int i = 0; i < n - 1; i++)
        {
            if (z == 0)
            {
                if (s[i] == '0')
                {
                    if (s[i + 1] == '1')
                    {
                        cout << "+";
                        z =z+ s[i] + s[i + 1] - 96;
                    
                    }
                    else
                    {
                        cout << "+";
                        z = z+s[i] + s[i + 1] ;
                    }
                }
                else
                {
                    if (s[i + 1] == '1')
                    {
                        cout << "+";
                        z = z+ s[i] + s[i + 1] -96;
                    }
                    else
                    {
                        cout << "+";
                        z = z+ s[i] + s[i + 1] -96;
                    }
                }
            }
            else
            {

                if (s[i] == '0')
                {
                    if (s[i + 1] == '1')
                    {
                        cout << "-";
                        z = z+ s[i] - s[i + 1] ;
                    }
                    else
                    {
                        cout << "+";
                        z = z;
                    }
                }
                else
                {
                    if (s[i + 1] == '1')
                    {
                        cout << "-";
                        z =  s[i] - s[i + 1] ;
                    }
                    else
                    {
                        cout << "+";
                        z = z;
                    }
                }
            }
           
        }
         cout << "\n";
    }
}

