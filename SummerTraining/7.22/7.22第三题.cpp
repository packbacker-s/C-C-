#include<iostream>
//#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;

struct node
{
	int num,i;
} ;
node dp[10000017];
int num[100000+7];
inline void get_min(int n,int k){
	for(int i = 0 ;i <= n; i++){
	dp[i].num = dp[i].i =0;
	}
	dp[0].num = -0x3f3f3f3f;
	int head =1,tail =1;
	for(int i = 1; i <= k; i++){
		while(head <= tail && dp[tail].num >= num[i]){
			tail--;
		}
		dp[++tail].num =num[i];
		dp[tail].i = i;
	}
		for(int i = k; i <= n; i++){
		while(head <= tail && dp[tail].num >= num[i]){
			tail--;
		}
		dp[++tail].num =num[i];
		dp[tail].i = i;
		while(dp[head].i <= i-k) head++;
		cout << dp[head].num << ' ';
	}
	cout << endl;
}
inline void get_max(int n,int k){
	for(int i = 0 ;i <= n; i++){
	dp[i].num = dp[i].i =0;			//ÏÈ³õÊ¼»¯
	}
	dp[0].num = 0x3f3f3f3f;
	int head =1,tail =1;
	for(int i = 1; i <= k; i++){
		while(head <= tail && dp[tail].num <= num[i]){
			tail--;
		}
		dp[++tail].num =num[i];
		dp[tail].i = i;
	}
		for(int i =k ; i <=n; i++){
		while(head <= tail && dp[tail].num <= num[i]){
			tail--;
		}
		dp[++tail].num =num[i];
		dp[tail].i = i;
		while(dp[head].i <= i-k) head++;
		cout << dp[head].num << ' ';
	}
	cout << endl;


}

int n ,k ;
int main (){
	cin >> n >> k;
	for(int i = 1; i <= n ;i++){
		cin >> num[i];
	}
	get_min(n,k);
	get_max(n,k);

	return 0;
}
