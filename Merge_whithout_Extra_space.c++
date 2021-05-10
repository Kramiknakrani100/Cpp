#include <bits/stdc++.h>
using namespace std;

// void merge(int a[], int b[], int n, int m)
// {
//     int i = n - 1;
//     int j = 0;
//     while (i >= 0 && j <= n)
//         ;
//     {
//         if (a[i] >= b[j])
//         {
//             swap(a[i], b[j]);
//             i--;
//             j++;
//         }
//     }
//     sort(a, a + n);
//     sort(b, b + n);

//     for (int i = 0; i < n; i++)
//         cout << a[i] << " ";

//     cout << endl;

//     for (int i = 0; i < m; i++)
//         cout << b[i] << " ";
// }

int main()
{
    int n, m;
    cout << "enter number of size Of Array = ";
    cin >> n >> m;

    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

   // merge(a, b, n, m);
    int i = n - 1;
    int j = 0;
    while (i >= 0 && j <= n)
    {
        if (a[i] >= b[j])
        {
            swap(a[i], b[j]);
            i--;
            j++;
        }
    }
    sort(a, a + n);
    sort(b, b + m);

    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    for (int j = 0; j < m; j++)
    {
        cout << b[j]<<" ";
    }
}