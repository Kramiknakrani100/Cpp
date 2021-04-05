#include <stdio.h>
#include <iostream>
using namespace std;

void Shift_Elements(int a[], int l, int r)
{
    
    while (l <= r)
    {
        if (a[l] < 0 && a[r] < 0)
        {
            l++;
        }
        else if (a[l] < 0 && a[r] > 0)
        {
            l++;
            r--;
        }
        else if (a[l] > 0 && a[r] < 0)
        {
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
            l++;
            r--;
        }
        else
        {
            r--;
        }
    }
}

void Display_Array(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cout<<"enter Number Of Elements = ";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Shift_Elements(a, 0, n-1);
    cout<<"Your Ans IS = ";
    Display_Array(a, n);
    return 0;
}