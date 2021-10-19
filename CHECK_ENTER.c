#include <bits/stdc++.h>
#define pb push_back
#define For(i,a,b) for(int i=(a); i<(b); i++)
using namespace std;
void solve(){
    long long D,d,P,Q,s=0;
    cin >> D >> d >> P >> Q;
    // for(long long i=0, cnt=0; i<D; i+=d,cnt++)
    //     D-i>d ? s += d*(P + cnt*Q): s += (D-i)*(P + cnt*Q);
    long long n = D/d-1;
    s = d*( P*(n+1) + Q*(n*(n+1)/2));
    if(D%d != 0)
        s+= D%d *(P + (n+1)*Q);
    cout << s << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
