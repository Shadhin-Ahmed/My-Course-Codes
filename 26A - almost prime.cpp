// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

bool is_prime (int n) {
  int divisors = 0;
  for (int i=1 ; i<=n ; i++) {
    if (n%i==0) {
      divisors++;
    }
  }
  if (divisors==2) {
    return true;
  } else {
    return false;
  }
}

bool is_almost_prime(int n) {
  int prime_divisors = 0;
  for (int i=1 ; i<=n ; i++) {
    if (n%i==0) {
      if (is_prime(i)) {
        prime_divisors++;
      }
    }
  }
  if (prime_divisors == 2) {
    return true;
  } else {
    return false;
  }
}

int main() {

  int n; cin >> n;
  int count = 0;
  for (int i=1 ; i<=n ; i++) {
    if (is_almost_prime(i)) {
      count++;
    }
  }
  cout << count;
  return 0;
}
