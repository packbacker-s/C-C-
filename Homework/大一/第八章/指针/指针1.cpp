#include<stdio.h>
#include<string.h>
main()
{
  char s1[20],s2[20];
  char *p1,*p2;
  int i,b;
  p2=s1;
  p2=s2;
  gets(s1);
  gets(s2);
  b=strlen(s2);
  while(*p1)
    {
      putchar(*p1);
      p1++;
    }
    printf("\n");
    for(i=0;i<=b;i++)
        printf("%c",*(p2+i));
    printf("\n");
}
