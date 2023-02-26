#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long x, d, count = 0;
    char ch;
    cin >> t >> x;
    long long remain = x;
    while (t--)
    {
        cin >> ch >> d;
        if (ch == '+')
            remain += d;
        else if (ch == '-')
        {
            if (remain < d)
                count++;
            else
                remain -= d;
        }
    }
    cout << remain << " " << count << endl;
}