#include <bits/stdc++.h>
using namespace std;

int deletes(int arr[], int n, int x)
{
    int idx;
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    if (i == n)
    { 
        return n;
    }

    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return n - 1;
}

int main()
{
    int cap = 5;
    int arr[cap] = {1, 2, 3, 4};
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "---------------------------" << endl;

    n = deletes(arr, n, 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}