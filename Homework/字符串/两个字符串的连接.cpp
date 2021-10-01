#include "stdio.h"
#include "string.h"
main()
{
  char s1[1000];
  char s2[500];
  printf("please input a string:s1\n");
  scanf("%s",s1);
  printf("please input a string:s2\n");
  scanf("%s",s2);
  strcat(s1,s2);
  printf("%s\n",s1);
}
