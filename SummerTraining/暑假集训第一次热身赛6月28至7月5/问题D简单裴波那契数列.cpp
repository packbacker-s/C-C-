#include<stdio.h>
main()
{
    int i,n,a[20]={1,1} ;
    int N;
    scanf("%d",&N);
    while(N--){
    while(scanf("%d",&n)!=EOF){
        for(i=2;i<=n;i++){
            if(n==0||n==1){
            printf("%d",1);}
            else{
                a[i]=a[i-1]+a[i-2];
            }
        }printf("%d\n",a[n]);
    }
    }


}
