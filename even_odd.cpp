// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int n; cin >> n;
  int check = n&1;
  if (check==1) {
  	cout << "odd" <<'\n';
  } else {
  	cout << "even" <<'\n';
  }
  return 0;
}