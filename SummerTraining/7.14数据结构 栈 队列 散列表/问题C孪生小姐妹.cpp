#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
  int n,l,i,j;
  int a [10007];
  int b[10007];
  int count = 0;
  scanf("%d %d", &n, &l);
  while(~scanf("%d %d ", &n, &l)){
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i < n;i++){
    if(a[i]%2==0){
      for(j = 0;;j++){
        b[j]=a[i];
      }
    }
  }
    if(b[j]+b[++j]==l){
      count++;
      printf("%d\n",count);
    }

     else if(count==0)
     printf("what a pity!\n");

  }

}
