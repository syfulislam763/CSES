#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ll n;        cin>>n;

    ll totSum = n*(n+1) / 2;

    ll sum = 0;
    for(int i=1;i<n;i++){
        ll x;    cin>>x;
        sum += x;
    }

    ll ans = totSum-sum;

    cout << ans << "\n";



    return 0;
}