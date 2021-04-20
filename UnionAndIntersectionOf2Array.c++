#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

void Union(int a1[], int a2[], int m, int n)
{

    int i = 0, j = 0;

    while (i < m && j < n)
    {

        if (a1[i] < a2[j])
        {
            cout << a1[i] << " ";
            i++;
        }
        else if (a2[j] < a1[i])
        {
            cout << a2[j] << " ";
            j++;
        }
        else
        {
            cout << a1[i] << " ";
            i++;
            j++;
        }
    }

    while (i < m)
        cout << a1[i] << " ";
    i++;

    while (j < n)
        cout << a2[j++] << " ";
    j++;
}

void intersection(int a1[], int a2[], int m, int n)
{

    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {

        if (a1[i] < a2[j])
        {
            i++;
        }
        else if (a2[j] < a1[i])
        {
            j++;
        }
        else
        {
            cout << a1[i] << " ";
            i++;
            j++;
        }
    }

    while (i < m)
        i++;

    while (j < n)
        j++;
}

int main()
{

    int m, n;
    cin >> m >> n;

    int a1[m], a2[n];

    int i = 0, j = 0;

    for (i = 0; i < m; i++)
    {
        cin >> a1[i];
    }

    for (j = 0; j < n; j++)
    {
        cin >> a2[j];
    }

    cout << "Union Is = ";

    Union(a1, a2, m, n);

    cout << "intersection Is = ";

    intersection(a1, a2, m, n);
}