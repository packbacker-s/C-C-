                          #include<stdio.h>
#include<string.h>
main()
{
  char str[5][1000];
  int i;
  int j=0;
  printf("please 5 strings:\n");
  for(i=0;i<5;i++)
       gets(str[i]);
  for(i=1;i<5;i++)
     {
       if(strcmp(str[i],str[j])>0)
           j=i;
     }
  printf("the max string is:%s\n",str[j]);

}
