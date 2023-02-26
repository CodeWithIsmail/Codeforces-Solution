#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 0, j = 0, temp;
    cin >> n;

    while (j < n)
    {
        i++;
        if (i < 10)
            j++;
        else if (i >= 10 && i < 100)
            j += 2;
        else if (i >= 100 && i < 1000)
            j += 3;
    }

    vector<int> digit;
    for (; i;)
    {
        temp = i % 10;
        digit.push_back(temp);
        i = i / 10;
    }

    cout << digit[j - n];
}