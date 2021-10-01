#include<stdio.h>
int main(){
  int n,m,i;
  int sum=0;
  int a[500];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(i=0;i<n;i++){
     if(a[i]%2!=0)
       sum++;
   }
printf("%d\n",sum);
  return 0;
}
