#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

void DecimaltoOctal(int n)
{
    int ans[1000];
    int i= 0;

    while (n>0)
    {
        
        ans[i]= n%8;
        n /= 8;
        i++;
    }
    cout<<"Octal Number is "<<endl;

    for ( i = i-1; i >= 0; i--)
    {
        cout<<ans[i];
    }
}

int main()
{

    int n;
    cout<<"Enter Decimal Number"<<endl;
    cin>>n;

    DecimaltoOctal(n);

    return 0;

}