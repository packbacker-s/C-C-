#include "stdio.h"
#include "string.h"
main()
{
  char str[30]="****A*B**CD*EF***";
  char *p1,*p2,*q;
  int n;
  p1=str;
  while(*p1=='*')
    p1++;
  p2=p1;
  n=strlen(str)-1;
  q=str+n;
  while(*q=='*')
   q--;
  while(p1<=q)
  if(*p1!='*')
      *p2++=*p1++;
  else
     p1++;
  while(*q)
    *p2++=*q++;
  *p2='\0';
  puts(str);
}
