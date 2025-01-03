// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int sum_of_digits(int n) {
  int sum = 0; 
  while (n>0) {
     int last_digit = n%10;
     sum = sum + last_digit;
     n = n/10;    
  }
  return sum; 
}

int main() {

  char s[10000000]; 
  cin >> s;
  int len = strlen(s);
  int count = 0;
  int ascii_sum = 0;

  if (len==1) {
    cout << 0 <<'\n';
    return 0;
  }

  for (int i=0 ; i<len ; i++) {
    ascii_sum = ascii_sum + s[i] - '0';
  }
  count+=1;

  int n = ascii_sum;
  while (n>9) {
    n = sum_of_digits(n);
    count++;
  }
  cout << count <<'\n';
  return 0;
}
