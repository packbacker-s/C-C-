#include<iostream>
#include<cmath>
using namespace std;
int T,n,a[50000];
int i,t,dp[50000];
int main(){
	cin >> T ;
	while (T--)
	{
		cin >> n;
		for(int k = 0; k < n; k++){
			cin >> a[k];
		}
		dp[0] = 1;
		for( i = 1;i < n; i++ ){
			dp[i] = 1;
		for(int j =0; j < i; j++ ){
			if(a[i] <= a[j] ){
				dp[i] = max ( dp[i],dp[j]+1 );
			}
		}
		}
		int maxn = -1;
		for(int i = 0; i < n; i++){
			maxn = max(maxn ,dp[i]);
		}
		cout << n - maxn <<endl;
	}
	
	return 0;
}
