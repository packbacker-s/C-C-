#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#define maxn 1000005
int a[maxn];

int main()
{
	int n;
	while(scanf("%d", &n) && n){
		int x, ans = 0;                        //用哈希
		memset(a, 0, sizeof(a));
		for(int i = 0; i < n; i++){
			scanf("%d", &x);
			a[x]++;                    //计数
		}
		for(int i = 1; i <= n; i++){
			if(i <= 2){
				ans += a[i] / 2;
				a[i] %= 2;
			}else{
				if(a[i] && a[i-1] && a[i-2]){
					ans++;
					a[i]--;
					a[i-1]--;
					a[i-2]--;
				}
				ans += a[i] / 2;
				a[i] %= 2;
			}
		}
		printf("%d\n", ans);
	}
}
