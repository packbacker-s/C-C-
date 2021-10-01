#include "stdio.h"
main()
{
  int i,s,j;
  float sum=0;
  for(i=1,sum=0;i<=5;i++)
     {
       for(s=1,j=1;j<=i;j++)

       s*=j;
       sum+=1.0/s;
     }
     printf("%f",sum);
}
