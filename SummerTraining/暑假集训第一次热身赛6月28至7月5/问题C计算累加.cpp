#include "stdio.h"
 int main(){
  int sum=0;
  int i;
  int N;
  while(scanf("%d",&N)!=EOF)
     {
       sum=0;
      if (N==0)
        break;
      else
        for(i=1;i<=N;i++)

          sum+=i;
          printf("%d\n",sum);
     }
   return 0;
}
