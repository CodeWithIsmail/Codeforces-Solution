#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, total = 0, i;
        cin >> n >> m;
        int a[n];

        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)
        {
            total += a[i];
            if (total >= m)
            {
                total = m;
                break;
            }
        }
        cout << total << endl;
    }
}