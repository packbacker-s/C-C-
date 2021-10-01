#include<stdio.h>
#include<iostream>
#include <cstring>
int main(){
 char a[100];
 char b[100];
 int len;
  while(scanf("%s", &a)!=EOF){
    len = strlen(a);
    for(int i = 0; i < len-1; i++)
    if(a[i]!=5){
      for(int j = 0;j < len-1; j++){
        b[j]=a[i];
      }
    }
    for( int i = 0; i < strlen(b); i++)
    printf("%s\n",b);
  }
  return 0;
}
