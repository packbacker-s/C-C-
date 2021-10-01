#include<stdio.h>
#include<string.h>
void order(char p[],int n)
{
	char *a;
	int i,j,k;
	for(i=0;i<n-1;i++)
		{
			k=i;
			for(j=1;j<n;j++)
			{
				if(strcmp(p[i], p[j])>0)
				{
					k=j;
				}
				if(k!=i)
				{
					a=p[i];
					p[i]=p[k];
					p[k]=a;
				}
			 }
			 for(i=0;i<5;i++)
			 {
			 	puts(p[i]);

			 }
		}


}
main()
{
	char *str[]={"i","am","a","good","boy"};
	int n=5;
	order(str,5);
}
