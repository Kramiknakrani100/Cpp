#include<stdio.h>
#include<conio.h>
#include <iostream>             
using namespace std;

int fact(int n) {

   int  factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        /* code */
        factorial*= i;

    }
    return factorial;
}

int main(){

    int n,r,ans; 
    cin>>n>>r;

    ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;

    return 0;
}