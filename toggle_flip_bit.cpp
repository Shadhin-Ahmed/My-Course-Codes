// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int toggle_the_bit(int n, int k) {
  int toggle_bit = n ^ (1 << k);  // ~ (1 << 2) = .....1 1 1 1 1 0 1 1
  return toggle_bit;
}

int main() {

  int n; cin >> n;  // 212 = 11010100

  n = toggle_the_bit(n, 2);   // each left shift add 2 decimal unit if its 0
  cout << n;

  return 0;
}