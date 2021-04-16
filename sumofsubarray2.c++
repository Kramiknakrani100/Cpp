#include <stdio.h>
#include <iostream>
#include <climits>
using namespace std;
// Time Comlexity Is O(n²)

int main()
{
    int n;
    cout << "enter number of size Of Array = ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Sum Of SubArray Is = ";

    int cursum[n + 1];
    cursum[0] = 0;

    for (int i = 1; i < n + 1; i++)
    {
        cursum[i] = cursum[i - 1] + a[i - 1];
    }

    int mx = INT8_MIN;

    for (int i = 1; i < n + 1; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = cursum[i] - cursum[j];
            cout << sum << " ";
            mx = max(mx, sum);
        }
    }

    cout << endl;
    cout << "Maximum Sum Is = ";
    cout << mx << endl;
}