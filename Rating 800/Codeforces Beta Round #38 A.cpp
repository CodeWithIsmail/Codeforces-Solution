#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, i, s = 0;
    cin >> n;
    int rank[n];
    for (i = 0; i < n - 1; i++)
        cin >> rank[i];
    cin >> a >> b;
    for (i = a - 1; i < b - 1; i++)
        s += rank[i];
    cout << s << endl;
}