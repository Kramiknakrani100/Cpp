#include <iostream>
using namespace std;

void ones(int n){
    int count = 0;
    while (n!=0){
        n = n & (n-1);
        count++;
    }
    cout<<count<<endl;
}

int main(){

    ones(587);
    return 0;
}