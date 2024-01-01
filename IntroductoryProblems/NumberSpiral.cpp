#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll x, y;             cin>>x>>y;

    if(x==y){
        cout << (x*x) - y + 1 << "\n";
    }else if(x>y){
        if((x&1)){
            x--;
            cout << (x*x)+y << "\n";
        }else{
            cout << (x*x)-y+1 << "\n";
        }
    }else{
        if((y&1)){
            cout << (y*y)-x + 1 << "\n";
        }else{
            y--;
            cout << (y*y)+x<< "\n";
        }
    }
}
int main(){
    int testcase = 0;cin>>testcase;

    while(testcase--){
        solve();
    }
    return 0;
}