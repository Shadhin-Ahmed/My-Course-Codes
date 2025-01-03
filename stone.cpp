// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int n; cin >> n;
  char m[n+1];
  cin >> m;
  int count = 0;
  int initial_stone = 0;
  while (initial_stone < n) {
    int i = initial_stone;
    int final_stone = i;
    while (final_stone<n) {
      if (m[i]==m[initial_stone]) {
        final_stone = i;
        i++;
      } else {
        break;
      }
    }
    int total_stone = final_stone - initial_stone + 1;
    count += total_stone - 1;
    initial_stone = final_stone + 1;
  }
  cout << count;

  return 0;
}
