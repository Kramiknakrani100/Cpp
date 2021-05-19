#include <iostream>
using namespace std;

// what is is bit at that position
int getbit(int n, int position){
    return (n & (1<<position)) != 0;
}

// set bit 1 at position
int setbit(int n, int position){
    return (n | (1<<position));
}

// set bit 0 at position
int clearbit(int n, int position){
    return (n & ~(1<<position));
}

// int updatebit(int n, int positon){
//     if(getbit(n, positon) == 1){
//         return clearbit(n,positon);
//     }
//     else{
//         return setbit(n,positon);
//     }
// }

int updatebit(int n, int position,int value){
    n = (n & ~(1<<position));
    return (n | value<<position);
}


int main(){

   // cout<<getbit(5,1)<<endl;
    
  // cout<<setbit(5,1)<<endl;

   //  cout<<clearbit(5,2)<<endl;

     cout<<updatebit(5,2,0)<<endl;
    
    return 0;
}