#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    int key,n,i,j;
    int a[100];
    cout<<"enter the array size"<<endl;
    cin>>n;

    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }  
    }
    for ( i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        } 
}