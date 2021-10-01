#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
  int str [1009][1009];
  int N,M,K;

  while(~scanf("%d %d &d",&N,&M,&K)){
    if(N=M=K==0)
    break;
    memset(str, 0, sizeof(str));
    int a,b,c,d;
    for(int i = 0; i < K; ++i  ){
      scanf("%d %d %d %d",&a,&b,&c,&d);
      for ( int j = a;j <= c; ++j){
        for ( int s = b;s <= d;++s ){
          str [j][s] = 1;
        }
      }
   }
   int count=0;
   for (int i = 1; i <= N; ++i){
     for (int j = 1; j <= M; ++j){
      if(str [i][j])
      count ++;
      }
   }

    printf("%d\n",count);
  }

  return 0;
}
