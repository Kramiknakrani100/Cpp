#include <bits/stdc++.h>
using namespace std;

void Leadersort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }

        if (flag == false)
        {
            cout << arr[i] << " ";
        }
    }
}

    void leader(int arr[], int n)
    {
        int cur_lead = arr[n - 1];
        cout << cur_lead << " ";
        for (int i = n - 2; i >= 0; i--)
        {
            if (cur_lead < arr[i])
            {
                cur_lead = arr[i];
                cout << cur_lead << " ";
            }
        }
    }

    int main()
    {
        int arr[7] = {7, 10, 4, 3, 6, 5, 2};
        leader(arr, 7);
    }