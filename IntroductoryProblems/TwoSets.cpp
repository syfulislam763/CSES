#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    
    ll n;        cin>>n;

    ll sum = (n*(n+1))/2;

    if(sum%2==1){
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    ll target = sum/2;
    ll k = n;
    set<ll> s1, s2;

    for(ll i=1;i<=n;i++)s1.insert(i);


    while(s1.count(target) == 0){
        target -= k;
        s2.insert(k);
        s1.erase(k);
        k--;
    }
    s1.erase(target);
    s2.insert(target);

    cout << s1.size() << "\n";
    for(auto v:s1){
        cout << v << " ";
    }
    cout << "\n";

    cout << s2.size() << "\n";
    for(auto v:s2){
        cout << v << " ";
    }
    cout << "\n";




    return 0;
}