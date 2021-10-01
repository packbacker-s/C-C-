#include<iostream>
using namespace std;
int n ,k;
int dp[1000];
int main(){
	while(cin >> n >> k && 2){

	dp[0] = 1;
	for(int i = 1; i<= n ;i++){
		dp[i] = 0;
	}
	for(int i = 1; i <= k;i++){
		for(int j = i; j <= n; j++){
			dp[j] = dp[j]+ dp[j-i];
		}
	}
	cout << dp[n] << endl;
	}
	return 0;
}
