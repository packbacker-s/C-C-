
#include<stdio.h>
main()
{int x;
scanf("%d",&x);
if(x%4==1)
printf("A\n");
else if(x%4==2)
printf("B\n");
else if(x%4==3){
x=x+2;
printf("A\n");
     }
else {
x=x+1;
printf("A\n");
  }
}
