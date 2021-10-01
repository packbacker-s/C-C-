#include<stdio.h>
main()
{
  char str[1000]="";
  int i,j;
  i=0;j=0;
  printf("please input a string:\n");
  gets(str);
  for(i=0;str[i];i++)
     if(str[i]!='*')
       {
         str[j]=str[i];j++;
       }
  str[j]='\0';
  printf("output the new string:\n");
  puts(str);
  return 0;

}
