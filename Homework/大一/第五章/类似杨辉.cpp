#include<stdio.h>
main()
{
  int i,j,k;
  for(i=1;i<=6;i++)
   {
     for(j=1;j<i;j++)
       printf(" ");
    for(k=1;k<=13-2*i;k++)
      printf("*");
    printf("\n");
    
   }
}
