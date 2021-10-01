
#include<stdio.h>
int main(){
  int N,M;
  int a[100];
  int i,j,t;
  int sum=0;
  int count=0;
  while(~scanf("%d%d",&N,&M)){
    count=0;
    sum=0;
  for(int i=0;i<N;i++)
    scanf("%d",&a[i]);
  for(j=0;j<N-1;j++){
     for(i=0;i<N-j-1;i++)
     if(a[i]>a[i+1]){
       t=a[i];
       a[i]=a[i+1];
       a[i+1]=t;
     }
  }
  for(i=0;i<N;i++){
    sum+=a[i];
    if(sum>M)
     break;
    count++;
  }
printf("%d\n",count);
}
}
