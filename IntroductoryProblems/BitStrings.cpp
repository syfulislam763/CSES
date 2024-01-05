#include <bits/stdc++.h>
#define ll long long int
using namespace std;


const ll mod = 1e9+7ll;


ll power(ll base, ll x){
    ll ans = 1LL;

    while(x){
        if(x&1){
            x--;
            ans = ((ans%mod) * (base%mod))%mod;
        }else{
            x = (x>>1);
            base = ((base%mod) * (base%mod))%mod;
        }
    }

    return (ans%mod);
}

int main(){

    ll n;      cin>>n;

    ll x = power(2, n);

    cout << x << "\n";



    return 0;
}