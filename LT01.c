#include <bits/stdc++.h>
#define pb push_back
#define For(i,a,b) for(int i=(a); i<(b); i++)
using namespace std;
int main(){
    int t;
    cin >> t;
    if(t>1000 || t<1) return 0;
    while(t--){
        int M,S;
        cin >> M >> S;
        if(M>100 || M<1) return 0;
        if(S>10 || S<1) return 0;
        cout << M/S <<"\n";
    }
    return 0;
}
