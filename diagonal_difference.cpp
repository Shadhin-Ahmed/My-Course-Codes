// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int n; cin >> n;
  int mat[n][n];
  for (int i=0 ; i<n ; i++) {
    for (int j=0 ; j<n ; j++) {
      cin >> mat[i][j];
    }
  }

  int first_diagon_sum = 0; 

  for (int i=0 ; i<n ; i++) {
    for (int j=0 ; j<n ; j++) {
      if (i==j) {
         first_diagon_sum += mat[i][j];
      }
    }
  }

  int second_diagon_sum = 0;

  for (int i=0 ; i<n ; i++) {
    for (int j=0 ; j<n ; j++) {
      if ((i + j) == (n-1)) {
         second_diagon_sum += mat[i][j];
      }
    }
  }

  int ans = first_diagon_sum - second_diagon_sum;
  cout << abs(ans);

  return 0;
}