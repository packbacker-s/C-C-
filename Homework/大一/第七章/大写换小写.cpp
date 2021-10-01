#include<stdio.h>
main()
{
  int i,j;
  char str[20];
  gets(str);
  for(i=0;str[i]!='\0';i++)
    if(str[i]>='A'&&str[i]<='Z')
  str[i]+=32;
  puts(str);
}
