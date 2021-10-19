#include <bits/stdc++.h>
#define pb push_back
#define For(i,a,b) for(int i=(a); i<(b); i++)
using namespace std;
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if( a == 7 || b == 7 || c == 7) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
