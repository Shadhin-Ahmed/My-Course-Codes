// Bismillahir Rahmanir rahim 
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n; cin >> n;
	vector <int > a(n),b(n);
	for(int &x : a)
		cin >> x;
	
	for(int &x : b)
		cin >> x;
	
	vector<long long int > dp(2);
	for(int i = 0 ; i < n; i++){
		long long int x, y ;
		x = max(dp[0],dp[1]+a[i]);
		y = max(dp[1],dp[0]+b[i]);
		dp[0] = x;
		dp[1] = y;
	}
	
	cout << (max(dp[0],dp[1]));
	
	return 0;
}