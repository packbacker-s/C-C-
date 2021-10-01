#include <stdio.h>
int main(){
  int N;
  int a[80];
  scanf("%d",&N);
  int count;
  while(1){
    count=0;
    int i;
    for(int i=0;i<N;i++)
      scanf("%d",&a[i]);
        for(i=0;i<N-1;i++){
        if((a[i]%2==1 && a[++i]%2==0) || (a[i]%2==0 && a[++i]%2==1)){
          count++;
        }

      }
      printf("%d\n",count);
  }

  return 0;
}
