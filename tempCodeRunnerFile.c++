#include <stdio.h>
#include <iostream>
#include <climits>
using namespace std;
// Time Comlexity Is O(n)

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

    int cursum = 0;
    int mx = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        cursum += a[i];
        if (cursum < 0)
        {
            cursum = 0;
        }
        mx = max(mx, cursum);
    }

    cout << "Maximum Sum Is = ";
    cout << mx << endl;
}