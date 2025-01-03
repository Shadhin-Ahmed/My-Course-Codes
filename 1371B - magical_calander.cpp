// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n , r ;
    cin >> n >> r;
    r = min(n,r) ;
    long long ans = r * (r-1) ;
    ans >>= 1;

    if(r >= n) ans += 1;
    else ans += r ;

    cout << ans << endl ;
}

int main(){
    
    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }

    return 0 ;
}