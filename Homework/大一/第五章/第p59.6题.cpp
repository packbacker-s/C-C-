#include<stdio.h>
main()
{
  long int n;
  int m,s=0;
  printf("please input a number\n" );
  scanf("%ld",&n);
  while(n>0)
  {
     m=n%10;
    if(m%2==0)
      s=s*10+m;
    n/=10;
  }
  printf("%d\n",s);


}
