#include<iostream>
#include<cstring> 
#include<cmath>
#include<algorithm>
//#include<vector>
//#include<string>
using namespace std;
long long int T,n,s,c[1007],v[1007],dp[1007][1007];
 int main (){
 	cin  >>T ;
 	while(T--){

 	cin >> n>> s;
 	c[0]=0;
 	v[0]=0;
 	for(int i =0; i < n; i++){
 		cin >> c[i];
	 }
	 for(int i = 0; i < s; i++){
	 	cin >> v[i];
	 }
	 memset(dp, 0, sizeof dp);
	 for(int i =1; i <= n; i++){
	 	for(int j = 0; j <= s;j++){
	 		if(j >=v[i]){
	 			dp[i][j] = max (dp[i-1][j],dp[i-1][j-v[i]] + c[i]);
			 }
			 else dp [i][j] = dp [i-1][j];
		 }
	 }
	 cout << dp[n][s]<<endl;
	 }
 	return 0;
 } 
