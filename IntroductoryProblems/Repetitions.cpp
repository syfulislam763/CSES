#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;      cin>>s;
    s = '@'+s;

    int ans =0,cnt = 1;
    for(int i=1;i<=s.size()-1;i++){
        if(s[i]==s[i+1]){
            cnt++;
            ans = max(ans, cnt);
        }else{
            cnt = 1;
            ans = max(ans, cnt);
        }
    }

    cout << ans << "\n";

    return 0;
}