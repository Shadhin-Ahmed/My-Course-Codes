// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int t; cin >> t;
  while (t--) {
  	int n; cin >> n;
  	int bit[32];
  	for (int k=0 ; k<32 ; k++) {
  		bit[k] = (n >> k) & 1;
  	}
  	reverse(bit, bit+32);
  	unsigned int ans = 0;
  	for (int k=0 ; k<32 ; k++) {
  		if(bit[k]) {
  			ans += (1<<k);
  		}
  	}
  	cout << ans <<'\n';

  }

  return 0;
}