// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int t; cin >> t;
  while (t--) {

    int n; cin >> n; 
    int arr[n];
    for (int i=0 ; i<n ; i++) {
      cin >> arr[i];
    }

    int sum = 0;
    int mn = 1e9;
    for (int i=1 ; i<=n ; i++) {
      for (int j=(i+1) ; j<=n ; j++) {
        sum = arr[i] + arr[j] + j - i;
        mn = min(mn, sum);
      }
    }
    cout << mn;

  }
  return 0;
}