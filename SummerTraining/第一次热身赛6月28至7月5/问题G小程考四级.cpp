#include"stdio.h"
int main(){
  int N;
  while(scanf("%d",&N)!=EOF){
    if(N==1)
    printf("Monday\n");
    else if(N==2)
    printf("Tuesday\n");
    else if(N==3)
    printf("Wednesday\n");
    else if(N==4)
    printf("Thursday\n" );
    else if(N==5)
    printf("Friday\n");
    else if(N==6)
    printf("Saturday\n");
    else if(N==7)
    printf("Sunday\n");
    else if(N==0)
    break;
  }
  return 0;

}
