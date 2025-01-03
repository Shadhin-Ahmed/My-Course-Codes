// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int n; cin >> n;  // n = 5
  int arr[n];      // 1 2 3 4 5
  for (int i=0 ; i<n ; i++) {
  	cin >> arr[i];
  }

  // Bitmasking = put mask on the elements using bit 1 0
  for (int mask=0 ; mask<(1<<n) ; mask++) {  // mask = 1, 2, 3, 4....., 2^n
  	for (int i=0 ; i<n ; i++) {             // i = 1, 2, 3, 4, 5
  		if ((mask >> i) & 1) {    // binary value of mask >> i times  & 1
  			cout << arr[i] <<" ";  // print true ith element of the array
  		}  // first subset is empty subset so first line will remain empty always
  	}
  	cout << '\n';
  }

  return 0;
}

// Time Complexity = O(1)  // all bitwise operation is O(1)