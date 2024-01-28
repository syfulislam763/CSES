#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ll n;     cin>>n;

    ll cnt = 0;

    for(ll i = 5; n/i >= 1; i = i*5){
        cnt += floor(n/i);
    }

    cout << cnt << '\n';


    


    




    return 0;
}