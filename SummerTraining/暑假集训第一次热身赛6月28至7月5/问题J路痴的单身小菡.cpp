#include "stdio.h"
int main(){
  int T;
  char a[1000][1000];
  int i,j,n,m,k;
  scanf("%d",&T);
  while(T--){
    scanf("%d%d%d",&n,&m,&k);
    for(i=0;i<n;i++){
      for(j=0;j<m;j++)
      scanf("%c",a[i][j]);

    }
  }

}
