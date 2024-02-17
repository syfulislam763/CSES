#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    int n, q;    cin>>n>>q;
    vector<ll>a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<ll>pref(n+1);

    for(int i=1;i<=n;i++){
        pref[i] = a[i]+pref[i-1];
    }

    while(q--){
        int x, y; cin>>x>>y;
        cout << pref[y]-pref[x-1] << '\n';
    }


    return 0;
}