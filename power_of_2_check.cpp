// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int check_bits(int c, int j) {    // c == b  j == i
  return (c >> j) & 1; 
}

int num_of_on_bits(int b) {      // b == a
  int count = 0;
  for (int i=0 ; i<32 ; i++) {
    check_bits(b, i);
    if (check_bits(b, i) == 1) {
      count++;
    }
  }
  return count;
}

bool power_of_2(int a) {         // a == n
  if (num_of_on_bits(a) == 1) {
    return true;
  } else {
    return false;
  }
}

int main() {

  int n; cin >> n;
  cout << power_of_2(n);

  return 0;
}