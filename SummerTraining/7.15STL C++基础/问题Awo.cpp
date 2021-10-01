#include<string>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(){
  string a;
  char ch;
while(cin >> a){
  cin >> ch;
  int count = -1;
  int len;
  len = a.length();
  for(int i = 0; i < len; i ++){
    if(a[i]==ch){
      count=i + 1;
      printf("%d ",count);

    }

   }
   if (count == -1)
    printf("NO");
    printf("\n");
 }
   return 0;
}
