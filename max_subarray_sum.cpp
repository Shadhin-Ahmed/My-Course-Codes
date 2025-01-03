// Bismillahir Rahmanir Rahim
// using Kadane,s Algorithm
#include<bits/stdc++.h>
using namespace std;

int main() {

  int n; cin >> n;
  int arr[n];
  for (int i=0 ; i<n ; i++) {
  	cin >> arr[i];
  }

  long long sum = 0;
  long long max_sum = -1e18;
  for (int i=0 ; i<n ; i++) {
  	sum += arr[i];
  	max_sum = max(max_sum, sum);
  	if (sum < 0) {
  		sum = 0;
  	}
  }
  cout << max_sum <<'\n';

  return 0;
}

/*// Method 2 : Course
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
     cin >> a[i];
  }
  long long max_subarray_sum = -1e18;
  long long sum = -1e18;
  for (int i = 0; i < n; i++) {
     sum = max((long long)a[i], a[i] + sum); // max subarray sum at index i
     max_subarray_sum = max(max_subarray_sum, sum);
  }
  cout << max_subarray_sum << '\n';
  return 0;
}*/