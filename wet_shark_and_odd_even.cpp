// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int n; cin >> n;
  int arr[n];
  for (int i=0 ; i<n ; i++) {
    cin >> arr[i];
  }

  long long sum = 0;
  for (int j=0 ; j<n ; j++) {
    sum += arr[j];
  }

  int mn = 1e9;

  if (sum%2 == 0) {
    cout << sum <<'\n';
  } else {
    for (int i=0 ; i<n ; i++) {
      if (arr[i]%2 == 1) {
        mn = min (mn, arr[i]);
      }
    }
    cout << (sum-mn) <<'\n';
  }

  return 0;
}