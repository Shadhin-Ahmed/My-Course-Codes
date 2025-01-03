// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int q; cin >> q;
  while (q--) {
  	unsigned int n; cin >> n;
  	
  	unsigned int ans = 0;
  	for (int i=0 ; i<32 ; i++) {
  		if ((n>>i) & 1) {    
  		
  		} else {
  			ans += (1<<i);  // 10110 = 10 + 100 + 10000
  		}
  	}
  	cout << ans <<'\n';

  }

  return 0;
}