#include<stdio.h>
int main()
{
  int a[80],n,i,ave,top=0,num,sum=0,t,max;
  printf("please input number:\n");
   scanf("%d",&n);
  printf("please input mark:\n");
  for(i=0;i<=n;i++)
        scanf("%d",&a[i]);
  for(i=0;i<=n;i++)
     sum+=a[i];
     ave=sum/n;
  for(i=0;i<n;i++)
      if(a[i]>a[i+1])
         {t=a[i];a[i]=a[i+1];a[i+1]=t;

       }
         printf("%d\n",a[i]);
          if(max==a[i])
             top+=1;
}
