#include<stdio.h>
int main()
{
    int x[10][10]={0};
    int n,m;
    int n1,n2;
    int p =0 ;
    int w;
    int num;
    scanf("%d %d",&n,&m);
    for(int i= 0;i<n;i++)
    {

        scanf("%d",&num) ;
    for(int j=0;j<num;j++)
    {
         w =0;
    scanf("%d",&w);
    x[i][w-1] = 1;
     }

    }
    int t= 0;
    scanf("%d",&t);
    for(int i =0;i<t;i++)
    {
        p =0;
        scanf("%d %d",&n1,&n2);
        for(int j =0;j<10;j++)
        {

            if(x[n1-1][j] == x[n2-1][j]&&x[n1-1][j]!=0&&x[n2-1][j]!=0)
            {
                p =1;
                printf("yes\n");
                break;
            }

        }
        if(!p)
        printf("no\n");
    }
