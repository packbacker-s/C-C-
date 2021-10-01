#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[]) {
 char a[80];
 char c[80];
  int i,b,j;
  gets(a);
  b=strlen(a);
for(i=1,j=0;i<=b;i++,j++)
  c[j]=a[b-i];
  c[strlen(a)]='\0';
  printf("%s\n",c);
}
