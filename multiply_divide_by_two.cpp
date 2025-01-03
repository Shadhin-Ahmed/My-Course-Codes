// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int n; cin >> n;
  int two_multiply = n << 1;       // n multiply by 2 power 1
  cout << two_multiply <<'\n';    // n << 3 = n multiply by 2 power 3 or 8

  int two_divide = n >> 1;       // n divide by 2 power 1
  cout << two_divide <<'\n';    // n >> 4 = n divide by 2 power 4 or 16

  return 0;
}