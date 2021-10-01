#include<stdio.h>
main()
{
  char str[80]="abcdefe";
  int i=0;
  int length=0;
  gets(str);
  puts(str);
  while(str[i++]!='\0')
   length++;
  printf("%d\n",length);
}
