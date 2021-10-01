#include<stdio.h>
int main(){
  int n;
  long long int ans=1;

  while(~scanf("%d",&n)){
    ans=1;
    for(int i=0;i<n-2;i++){
      ans=(ans%1000000009*3%1000000009)%1000000009;
    }
    ans=ans*4%1000000009;
    printf("%d\n",ans);
  }
}
