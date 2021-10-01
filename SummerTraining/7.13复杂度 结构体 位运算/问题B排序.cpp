#include<stdio.h>
main()
{int a[1000],t,i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(j=0;j<n-1;j++)
for(i=0;i<n-j-1;i++)
if(a[i]>a[i+1])
{t=a[i];a[i]=a[i+1];a[i+1]=t;
}
for(i=0;i<n;i++)
printf("%d\n",a[i]);

}
