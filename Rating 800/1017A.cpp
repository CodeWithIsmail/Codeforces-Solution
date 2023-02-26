#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, a, b, c, d, temp, target, count = 1;
    
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        temp = a + b + c + d;
        if (i == 0)
            target = temp;
        if (i > 0 && temp > target)
            count++;
    }
    
    cout << count;
}