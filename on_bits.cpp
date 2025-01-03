// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

bool on_bits(int n, int k){
  int bit_check = (n >> (k-1)) & 1;
  if(bit_check == 1) {
    cout << k <<'\n';   // print the on bits position
    return true;
  } else {
    return false;
  }
} 

int main() {

  int n ; cin >> n;
  // int k ; cin >> k;
  // int bit = (n >> (k-1)) & 1;   // 212 = 11010100
  // cout << bit;                 // 3392 = 110101000000
  int count = 0;
  for (int i=1 ; i<32; i++) {   // any int number has most 32 binary bits
    if (on_bits(n,i)==true) {
      count++;
    }
  }
  cout << count;

  return 0;
}