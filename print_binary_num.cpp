// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int n; cin >> n;
  cout << bitset<8> (n);  // <8> == num of digits to print

  cout << "\n";

  long long m; cin >> m;
  cout << bitset<32> (m);  // <32> == num of digits to print

  return 0;
}