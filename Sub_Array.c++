#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[n];
    cout << "enter number of size Of Array = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}