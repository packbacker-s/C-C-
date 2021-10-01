#include<cstdio>
using namespace std;
int main()
{

	int t;
	scanf("%d",&t);
	int j;
	for( j = 1; j<= t;j++){

		char now[26] = {0};


		int n,m;
		scanf("%d%d",&n,&m);

		char s1[100],s2[100],s3[100];
		scanf("%s%s%s",s1,s2,s3);

		int chnum = s1[0] - s2[0];

		for(int i = 0;i<26;i++){
			int tmp = i;
			if(chnum<0)
				chnum +=26;
			tmp +=chnum;
			tmp %= 26;
			now[i] ='A'+ tmp;
		}
		printf("Case #%d: ",j);
		for(int i = 0;i < m;i++){
			int tmp = s3[i] - 'A';
			printf("%c",now[tmp]);
		}
		printf("\n");

	}


}
