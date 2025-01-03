// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int num_on_bits(int a) {
	int count = 0;
    for (int i=0 ; i<10	 ; i++) {
    	if((a>>i) & 1) {
    		count++;
    	}
    }
    return count;
}

int main() {

  int t; cin >> t;  // Time = O(t)
  while (t--) {

  	int n; cin >> n;
    
    int ans = 0;
    for (int i=1 ; i<=n ; i++) { // Time = O(n)
    	ans += num_on_bits(i);  // Time = log(n)
    }
    cout << ans <<'\n';

  }
  return 0;
}
// Time Complexity = O(t*n*log(n))
// Space Complexity = O(1)


/*// 2nd Method
// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

  int t; cin >> t;  // Time = O(t)
  while (t--) {
  	int n; cin >> n;
  	int ans = 0;
  	for (int i=1 ; i<=n ; i++) {  // Time = O(n)
  		ans += __builtin_popcount(i); //  Time = O(1)
  	}
  	cout << ans <<'\n';
  }

  return 0;
}
Time Complexity = O(t*n)
Space Complexity = O(1)
So this is better than Method 1
*/