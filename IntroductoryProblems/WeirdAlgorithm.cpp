// AUTHOR: SYFUL ISLAM

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n;           cin>>n;

    while(n>1LL){
        if((n&1LL)){
            cout << n << " ";
            n = (n*3LL)+1LL;
        }else{
            cout << n << " ";
            n = n/2LL;
        }
    }
    
    cout << n << " ";

    cout << "\n";


    return 0;
}