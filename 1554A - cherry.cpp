// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int t; cin >> t;
  while(t--) {

  	int n; cin >> n;
  	int arr[n+1];
  	for (int i=1 ; i<=n ; i++) {
  		cin >> arr[i];
  	}

  	long long ans = 0;
  	for (int i=1 ; i<n ; i++) {
  		ans = max(ans, (1LL*arr[i]*arr[i+1]));
  	}
  	cout << ans <<'\n';

  }

  return 0;
}