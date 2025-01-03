// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int n, k; cin >> n >> k;
  //int ans = n & (((1 << 30)-1) << k);
  int ans2 = (n & ((1<<30) - (1<<k)));
  

  //cout << ans <<'\n';
  cout << ans2 <<'\n';

  return 0;
}