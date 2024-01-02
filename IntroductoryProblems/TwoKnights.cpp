#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    ll n;           cin>>n;

    
    for(ll i=1LL;i<=n;i++){
        ll x = (i*i*i*i);
        ll y = (i*i);
        ll totalCombanation = (x-y)/2LL;

        ll attacking = 4LL*(i-1LL) * (i-2LL);

        cout << totalCombanation-attacking << "\n";
    }



    return 0;
}