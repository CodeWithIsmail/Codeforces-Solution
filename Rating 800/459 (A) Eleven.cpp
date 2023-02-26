#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int i = 1, j = 2, n;
    cin >> n;

    while (i <= n)
    {
        if (fibonacci(j) == i)
        {
            cout << "O";
            j++;
        }
        else
            cout << "o";
        i++;
    }
}