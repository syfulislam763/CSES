#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, q;       cin>>n>>q;

    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    vector<int> log_table(n+1, 0);
    for(int i=2;i<log_table.size();i++){
        log_table[i] = log_table[i/2]+1;
    }

    vector<vector<int>> sparse_table(log_table.back()+1, vector<int>(n, INT_MAX));
    sparse_table[0] = a;

    for(int row=1;row<sparse_table.size();row++){
        for(int i=0; i+(1<<row)<=n;i++){
            sparse_table[row][i] = min(sparse_table[row-1][i], sparse_table[row-1][i+(1<<(row-1))]);
        }
    }

    while(q--){
        int l, r;       cin>>l>>r;
        l--;
        r--;
        int lg = log_table[r-l+1];
        int ans = min(sparse_table[lg][l], sparse_table[lg][r-(1<<lg) +1]);
        cout << ans << "\n";
    }




    return 0;
}