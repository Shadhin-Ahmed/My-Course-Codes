// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

bool beautiful(int n) {
  int d4 = n%10;
  n = n/10;
  int d3 = n%10;
  n = n/10;
  int d2 = n%10;
  n = n/10;
  int d1 = n;

  if (d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 && d3!=d4) {
    return true;
  } else {
    return false;
  }
}

int main() {

  int n; cin >> n;
  //n+=1;
 /* while (true) {
    if(beautiful(n)) {
      cout << n;
      return 0;
    }
    n++;
  }*/

  for (int i=(n+1) ; i<=9000 ; i++) {  // finally works Alhamdulillah
    if (beautiful(i)) {   // beautiful(i)==true  // fn so work 1 time
      cout << i;        // here print i , not n
      return 0;
    }
  }

  return 0;
}
