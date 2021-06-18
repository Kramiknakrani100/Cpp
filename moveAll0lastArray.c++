#include <bits/stdc++.h>
using namespace std;

void moveAll0lastArray(int arr[], int n)
{
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[c];
            arr[c] = temp;
            c++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[9] = {10, 7, 1, 89, 0, 8, 0, 0, 0};
    moveAll0lastArray(arr, 9);
}