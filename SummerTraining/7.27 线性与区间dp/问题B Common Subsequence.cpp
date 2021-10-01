#include<iostream>
#include<cstring>
using namespace std;
string n,m,temp;
int main (){
	while(cin >> n >> m){
		if(n.size() < m.size()){
			temp = n;
			n = m;
			m = temp;
		}
		int dp[n.size()+10][n.size()+10];
		memset(dp ,0 ,sizeof dp);
		int maxn = 0;
		for(int i = 0; i < m.size();i++){
			int k = i +1;
			for(int j = 0; j < n.size();j++){
				int l = j +1;
				if(n[j] == m[i]){
					dp[k][l] = dp[k-1][l-1 ]+ 1;
				}
				else dp[k][l]= max(dp[k-1][l],dp[k][l-1]);
				maxn = max(maxn ,dp[k][l]);
			}
		}
		cout << dp[m.size()][n.size()] << endl;
	}
	return 0;
}
