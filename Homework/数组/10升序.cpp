#include<stdio.h>
main()
{
  int a[10];
  int i,j,t,k;
  printf("input ten numbers:\n");
  for(i=0;i<=9;i++)
     scanf("%d",&a[i]);
  for(i=0;i<=8;i++)
  {
    k=i;
      for(j=i+1;j<10;j++)
         if(a[j]<a[k])
         k=j;
         if(k!=i)
         {
           t=a[i];
           a[i]=a[k];
           a[k]=t;
         }
  }
  printf("output the order:\n");
  for(i=0;i<=9;i++)
  printf("%5d",a[i]);
  printf("\n");
}
