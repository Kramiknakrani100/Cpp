#include<bits/stdc++.h>
using namespace std;

void PII(string s){

    if(s.length()==0){
        return;
    }

    if(s[0]=='p' & s[1]=='i'){
        cout<<"3.14";
        PII(s.substr(2));
    }
    else{
        cout<<s[0];
        PII(s.substr(1));
    }
}

int main(){

    PII("pippxxipixxpii");
    return 0;
}