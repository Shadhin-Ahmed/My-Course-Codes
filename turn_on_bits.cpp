// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int turn_on_bit(int n, int k) {
	int turn_on = n | (1 << k);
	return turn_on;
}

int main() {

  int n; cin >> n;
  // int turn_on = n | (1 << 1);  // 212 = 11010100
  // cout << turn_on;

  n = turn_on_bit(n, 5);  // each left shift add 2 decimal unit if its 0
  cout << n;
  

  return 0;
}