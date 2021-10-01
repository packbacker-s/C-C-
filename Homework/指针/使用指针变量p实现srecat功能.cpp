#include<stdio.h>
main()
{
  char s1[100],s2[100];
  char *p1,*p2;
  gets(s1);
  gets(s2);
  p1=s1;
  p2=s2;
  while(*p1)
    p1++;
  for(;*p2!='\0';p1++,p2++)
       *p1=*p2;
  *p1='\0';
  puts(s1);

}
