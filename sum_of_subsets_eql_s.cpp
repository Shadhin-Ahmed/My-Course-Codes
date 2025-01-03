// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int n; cin >> n;
  int s; cin >> s;
  int arr[n];
  for (int i=0 ; i<n ; i++) {
  	cin >> arr[i];
  }

  for (int mask=0 ; mask<(1<<n) ; mask++) {
  	int subset_sum = 0;
  	for (int i=0 ; i<n ; i++) {
  		if((mask>>i) & 1) {
  			subset_sum += arr[i];
  		}
  	}
  	if (subset_sum == s) {
  		cout << "Yes";
  		return 0;
  	}
  }

  cout << "No";

  return 0;
}

/*// 2nd way
bool found = false; 
if (subset_sum = s) {
	found = true ; 
	break;
}
if (found) {
	cout << "Yes";
} else {
	cout << "No";
}*/