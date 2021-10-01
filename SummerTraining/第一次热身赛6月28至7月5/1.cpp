#include<stdio.h>
int main(){
	int f1,f2,fn,i,n,x;
	f1=f2=1;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		 if(x==1)
	     printf("1\n");
	    else
        for(i=3;i<=x;i++)
		  {
			  fn=f1+f2;
		   	f1=f2;
		  	f2=fn;
	   	}

		printf("%d\n",fn);

	}
	return 0;
}
