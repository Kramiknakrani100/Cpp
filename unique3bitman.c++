#include <iostream>
using namespace std;

int getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setbit(int n, int pos)
{
    return (n | (1 << pos));
}

void unique(int a[], int n)
{

    int result = 0;

    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getbit(a[j], i))
            {
                sum++;
            }
        }

        if (sum % 3 != 0)
        {
            result = setbit(result, i);
        }
    }
    cout << result << endl;
}

int main()
{
    int a[] = {1, 2, 3, 1, 2, 3, 9, 1, 2, 3};
    unique(a, 10);
    return 0;
}