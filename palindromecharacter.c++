#include <stdio.h>
#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;

    char a[n + 1];
    cin >> a;

    bool flag = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == true)
    {
        cout << a << " is Palindrome" << endl;
    }
    else if (flag == false)
    {
        cout << a << " is not Palindrome" << endl;
    }
}