#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
  int str [1009][1009];
  int N,M,K;
  int i,j;
  int a,b,c,d;
  int count = 0;
  while(~scanf("%d %d &d",&N,&M,&K)){
    if(N=M=K==0)
    break;
    memset(str, 0, sizeof(str));
    count=0;
    for(int i = 0; i < K; i ++ ){
      scanf("%d %d %d %d",&a,&b,&c,&d);
      for ( int j = a;j <= c; j++){
        for ( int s = b;s <= d;s ++){
          str [j][s] = 1;
        }
      }
   }
   for ( i = 1; i <= N; i++){
     for ( j = 1; j <= M; j ++){
      if(str [i][j])
      count ++;
      }
   }

    printf("%d\n",count);
  }

  return 0;
}
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int map[1005][1005];
int main(int argc, char const *argv[])
{
	int n, m, k;

	while (~scanf("%d %d %d", &n, &m, &k) ) {
		if (!n && !m && !k) break;
		memset(map, 0, sizeof(map));
		int a, b, c, d;
		for (int i = 0; i < k; ++i) {
			cin >> a >> b >> c >> d;
			for (int j = a; j <= c; ++j) {
				for (int s = b; s <= d; ++s) {
					map[j][s] = 1;
				}
			}
		}
		int sum = 0;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				if (map[i][j]) sum++;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
