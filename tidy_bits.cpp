// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int n; cin >> n;
  int count_one = 0;
  for (int k=0 ; k<32 ; k++) {
  	if((n>>k) & 1) {
  		count_one++;
  	}
  }
  int temp = ( (1 << count_one) -1 );
  cout << temp;

  return 0;
}