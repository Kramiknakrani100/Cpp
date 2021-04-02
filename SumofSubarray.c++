#include <stdio.h>
#include <iostream>
#include <climits>
using namespace std;
// Time Comlexity Is O(n³)

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
    int mx = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + a[k];
            }
            cout << sum <<" ";
            mx = max(mx, sum);
        }
    }
    cout << endl;
    cout << "Maximum Sum Is = ";
    cout << mx << endl;
}