#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string a;
    while (t--)
    {
        int c = 0, i, r = 0, g = 0, b = 0;
        cin >> a;
        for (i = 0; i < 6; i++)
        {
            if (a[i] == 'r')
                r = 1;
            else if (a[i] == 'g')
                g = 1;
            else if (a[i] == 'b')
                b = 1;

            if (a[i] == 'R' && r == 0)
                c = 1;
            if (a[i] == 'G' && g == 0)
                c = 1;
            if (a[i] == 'B' && b == 0)
                c = 1;

            if (c)
                break;
        }
        if (!c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
