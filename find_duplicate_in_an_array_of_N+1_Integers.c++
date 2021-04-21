#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <algorithm>
using namespace std;    

int main()
{
    int key,n,i;
    int a[100];
    cout<<"enter the array size"<<endl;
    cin>>n;

    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i+1])
        {
            cout<<a[i];
        }
        
    }
    
}