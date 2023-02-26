#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, r, c, i, j;
    cin >> t;

    while (t--)
    {
        int check = -1;
        cin >> n >> m >> r >> c;
        string a[n];

        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (a[i][j] == 'B' && check == -1)
                    check = 2;
                if (a[i][j] == 'B' && (i == r - 1 || j == c - 1))
                {
                    check = 1;
                }
                if (a[i][j] == 'B' && i == r - 1 && j == c - 1)
                {
                    check = 0;
                    break;
                }
            }
            if (check == 0)
                break;
        }

        if (check == -1)
            cout << "-1" << endl;
        else if (check == 2)
            cout << "2" << endl;
        else if (check == 1)
            cout << "1" << endl;
        else if (check == 0)
            cout << "0" << endl;
    }
}