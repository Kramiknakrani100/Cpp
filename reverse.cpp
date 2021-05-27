#include<bits/stdc++.h>
using namespace std;

void reverse(string s){

    if (s.length() == 0){  //base case
        return;
    }

    string rev = s.substr(1);
    reverse(rev);
    cout<<s[0];
}

int main(){

    reverse("HelloBro");
    return 0;
}
