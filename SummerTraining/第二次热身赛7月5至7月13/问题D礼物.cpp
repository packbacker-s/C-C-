#include <stdio.h>
#include <string.h>
int main(){
  char str[1007];
  int sum = 0 ;
  int length;
  int n;
  while(gets(str)!=NULL){
    sum=0;
    length=strlen(str);
    for(int i=0;i<length;i++){
      if(str[i]=='(')
      sum++;
      else if(str[i]==')')
      sum--;
      else if (str[i]=='B')
      break;
    }
        printf("%d\n",sum);
  }


}
