#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int n,a[50000];
int dp[5000];
int main(){
	while(cin >> n){
	a[0]=0;
	int t= 0;
	for(int i = 1; i <=n ;i++){
		cin >> a[i];
		dp[i] = 1;
	}

	for(int j = 2; j <= n; j++){
		for(int i = j -1; i >= 1;i--){
			if(a[j]> a[i]){
				dp[j] = max (dp[j],dp[i]+1);
			}
			t = max( t ,dp[j]);
		}
	}cout << t<< endl;
}
	return 0;
}
