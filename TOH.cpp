#include<bits/stdc++.h>
using namespace std;

void toh(int n, char src,char des, char helpar){

    if(n==0){ //base case
        return;
    }
    toh(n-1,src,helpar,des);
    cout<<"Move From "<<src<<" To "<<des<<endl;
    toh(n-1,helpar,des,src);
    
}

int main(){

    toh(4,'A','C','B');
    return 0;
}