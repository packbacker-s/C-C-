#include<cstdio>
#define maxn 500000+5

using namespace std;
int a[maxn];
int dp[maxn];
int main(){

	int n,m;
	scanf("%d%d",&n,&m);

	for(int i = 1;i<=n;i++)
		scanf("%d",&a[i]);

	dp[n] = -1;
	for(int i = n;i>0;i--){
		int j;
		for(j=i+1;j<=n;j++){
			if(a[i]+m<=a[j]){
					dp[i] = dp[j] + j - i;
                	break;
			}
		}
	}
	for(int i = 1;i<=n;i++){
		if(i!=1)
			printf(" ");
		printf("%d",dp[i]);
	}
}
