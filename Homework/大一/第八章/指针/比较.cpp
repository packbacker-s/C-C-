#include<stdio.h>
int main()
{
  int a[6]={5,8,6,9,19,56};
  int i,k,t,j;
  for(i=0;i<5;i++)
  k=i;
  for(j=i+1;j<=6;j++)
    if(a[k]>a[j]) k=j;
  if(k!=i)
  {
    t=a[k];
    a[k]=a[i];
    a[i]=t;
  }
  printf("%d",a[i]);  
}
