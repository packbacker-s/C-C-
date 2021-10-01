#include<stdio.h>
main()
{
  char str[1000];
  int i,num=0,word=0;
  char c;
  printf("input a string:\n");
  gets(str);
  for(i=0;((c=str[i])!='\0');i++)
         if(c==' ')
           word=0;
        else if(word==0)
        {
          word=1;
          num++;
        }
        
        printf("there are %d words in this string.",num);
        return 0;
}
