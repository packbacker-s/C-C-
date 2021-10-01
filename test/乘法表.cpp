#include<stdio.h>
main()
{
  int i,j;
  printf("              九九乘法表                \n" );
  for(i=1;i<=9;i++)
  {
     for(j=1;j<=i;j++)
      printf("%2d*%d=%2d",i,j,i*j);
  printf("\n");
  }

printf("                                                \n");
getchar();
return 0;
}
