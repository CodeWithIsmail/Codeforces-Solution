#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, dir1 = 0, dir2 = 0;
    string a;
    cin >> n;
    cin >> a;
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] == 'S' && a[i + 1] == 'F')
            dir1++;
        else if (a[i] == 'F' && a[i + 1] == 'S')
            dir2++;
    }
    if (dir1 > dir2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}