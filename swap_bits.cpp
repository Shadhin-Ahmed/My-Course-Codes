// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int t; cin >> t;
  while (t--) {
  	int n; cin >> n;

  	int ans = 0;
  	for (int i=0 ; i<32 ; i+=2) {  // Time = O(n)
  		int a = (n >> i) & 1;
  		int b = (n >> (i+1) & 1);
  		swap(a, b);
  		if (a) {
  			ans += 1 << i;
  		}
  		if (b) {
  			ans += 1 << (i+1);
  		}
  	}
  	cout << ans <<'\n';
  }

  return 0;
}
// Time Complexity = O(n)
// Time Complexity = O(1)