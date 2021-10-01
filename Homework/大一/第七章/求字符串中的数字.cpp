#include<stdio.h>
#include<string.h>
main()
{
  int i;
  char str[20];
  long int n=0;
  gets(str);
  for(i=0;i<=strlen(str)-1;i++)
     if(str[i]>='0'&&str[i]<='9')
     n=str[i]-'0'+n*10;
     printf("%d\n",n);
}
