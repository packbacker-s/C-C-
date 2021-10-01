#include<stdio.h>
#include<string.h>
main()
{   char str[3][10];
    char *p[3];
    int i;
    for(i=0;i<=2;i++)
     {
       p[i]=str[i];
       gets(p[i]);
     }
  for(i=0;i<=2;i++)
     puts(p[i]);
}
