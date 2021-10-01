#include "stdio.h"
#include "math.h"
main()
{
  float a,x,y,i;
  scanf("%f%f",&x,&y);
  i=1.5;
  if(sqrt((x-1)*(x-1)+(y-1)*(y-1))<i)
    {
      a=sqrt((x-1)*(x-1)+(y-1)*(y-1));
      printf("%f\n",a );
    }
  else
      printf("ssfdsdsa\n");
}
