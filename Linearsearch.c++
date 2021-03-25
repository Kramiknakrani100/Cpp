#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int linearsearch(int a[], int n, int key){

    int i;

    cout<<"key is "<<endl;

    for ( i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
        return i;
        }
    }
    return -1;  
}

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
    cout<<"enter Any Number"<<endl;
    cin>>key;

    cout<<linearsearch(a , n, key)<<endl;

}