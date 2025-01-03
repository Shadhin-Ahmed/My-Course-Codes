// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int n; cin >> n;
  int arr[n];
  for (int i=0 ; i<n ; i++) {
    cin >> arr[i];
  }

  int rev_arr[n];
  for (int i=0 ; i<n ; i++) {
    rev_arr[i] = arr[n-(i+1)];
  }

  for (int i=0 ; i<n ; i++) {
    if (arr[i] != rev_arr[i]) {
      cout << "NO" <<'\n';
      return 0;
    }
  }
  cout << "YES" <<'\n';

  return 0;
}