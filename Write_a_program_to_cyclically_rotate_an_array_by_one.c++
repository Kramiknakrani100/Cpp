#include <stdio.h>
#include <iostream>
using namespace std;

void Rotate(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1];
        a[n - 1] = temp;
    }
}

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

    Rotate(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}