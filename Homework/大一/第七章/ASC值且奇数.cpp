#include<stdio.h>
#include<string.h>
#define N 10
main()
{
  char str1[N],str2[N];
  int i,j=0;
  gets(str1);
  for(i=1;i<=strlen(str1)-1;i+=2)
    if(str1[i]%2==1)
       str2[j++]=str1[i];
  str2[j]='\0';
  puts(str1);
  puts(str2);
}
