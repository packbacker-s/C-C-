#include<stdio.h>
int main()
{
  int a[3][4];
  int i,j;
  printf("please input a number:\n");
  for(i=0;i<=2;i++)
    for(j=0;j<=3;j++)
 scanf("%d",&a[i][j]);
      for(i=0;i<=2;i++)
        {
          for(j=0;j<=3;j++)
            printf("%4d",a[i][j]);
          printf("\n");
        }
    return 0;
}
