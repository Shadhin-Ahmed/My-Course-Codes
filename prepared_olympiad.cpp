// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int n, l, r, x;
  cin >> n >> l >> r >> x;
  int diff[n];
  for (int i=0 ; i<n ; i++) {
    cin >> diff[i];
  }

  int ans = 0;
  for (int mask=0 ; mask<(1<<n) ; mask++) {
  	int sub_sum = 0, mn = 1e9, mx = 0, count = 0;
  	for (int i=0 ; i<n ; i++) {
  		if ((mask>>i) & 1) {
  			sub_sum += diff[i];
        mn = min(mn, diff[i]);
        mx = max(mx, diff[i]);
        count++;
  		}
  	}
    if ((sub_sum >= l) and (sub_sum <= r) and ((mx-mn) >= x) and (count >=2)) {
      ans++;
    }
  }
  cout << ans <<'\n';
  return 0;
}