#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j, check = 0, sum;

    cin >> n;
    int arr1[n];
    for (i = 0; i < n; i++)
        cin >> arr1[i];

    cin >> m;
    int arr2[m];
    for (i = 0; i < m; i++)
        cin >> arr2[i];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum = arr1[i] + arr2[j];
            if ((find(arr1, arr1 + n, sum) == arr1 + n) && (find(arr2, arr2 + m, sum) == arr2 + m))
            {
                cout << arr1[i] << " " << arr2[j] << endl;
                check = 1;
                break;
            }
        }
        if (check)
            break;
    }
}