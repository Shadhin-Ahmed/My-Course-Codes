// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long sum = (long long)n*(n+1)/2;
		long long power_sum = 0;
		for (int i=1 ; i<=n ; i*=2) {
			power_sum += i;
		}
		long long ans = sum - (2*power_sum);
		cout << ans <<'\n';
	}

	return 0;
}

// check explanation in my 0t0infinity folder code - it's a good one