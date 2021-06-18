#include <bits/stdc++.h>
using namespace std;

void rmvdp(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 10, 20, 20, 20, 30, 30, 40, 40, 40, 40};
    rmvdp(arr, 11);
}