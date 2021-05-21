#include <bits/stdc++.h>
using namespace std;

// return a resto b . Ex:- 4 resto 2 = 16.

int power(int a, int b)
{
    if(b==0){
        return 1;
    }
    int prepower = power(a,b-1);
    return (a*prepower);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
    return 0;
}