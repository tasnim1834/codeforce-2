#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    int c=0;
    for (int i = 0; i < n; ++i)
    {
        
        for (int j = 0; j < n; j++)
        {

            if (b[j] == a[i] && i != j)
            {
                c++;
                break;
            }
          
        }
    }

   cout<<n-c<<endl;

    return 0;
}