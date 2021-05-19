#include <iostream>
using namespace std;

void powerof2(int n){
    if((n & (n-1)) == 0){
        cout<<n<<" is power of 2"<<endl;
    }
    else{
        cout<<n<<" is not power of 2"<<endl;
    }
}

int main(){

    powerof2(16);
    return 0;
}