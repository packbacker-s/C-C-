#include<stdio.h>
int judge(char **a) {
  int flag = 0;
  for (int i = 0; i < 3; ++i) {
    if (a[0][i] == a[1][i] && a[0][i] == a[2][i] && a[0][i] == '0'){
      flag = 1;
      break;
    }
    if (a[i][0] == a[i][1] && a[i][0] == a[i][2] && a[i][0] == '0') {
      flag = 1;
      break;
    }
  }
  if(flag == 0 && a[0][0] == a[1][1] && a[0][0] == a[2][2] && a[0][0] == '0') {
    flag = 1;
  }
  if(!flag && a[0][2] == a[1][1] && a[0][2] == a[2][0] && a[0][2] == '0') {
    flag = 1;
  }
  return flag;
}
int main()
{
	int T,i,j;
	char a[3][3];
	scanf("%d",&T);
	while(T--){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++)
			scanf(" %c",&a[i][j]);

		}
		if(a[0][0]=='0' && a[0][1]=='0'&& a[0][2]=='0')
		printf("Yes\n");
		else
		if(a[1][0]=='0' && a[1][1]=='0'&& a[1][2]=='0')
		printf("Yes\n");
		else
		if(a[2][0]=='0' && a[2][1]=='0'&& a[2][2]=='0')
		printf("Yes\n");
		else
		if(a[0][0]=='0' && a[1][0]=='0'&& a[2][0]=='0')
		printf("Yes\n");
		else
		if(a[0][1]=='0' && a[1][1]=='0'&& a[2][1]=='0')
		printf("Yes\n");
		else
		if(a[0][2]=='0' && a[1][2]=='0'&& a[2][2]=='0')
		printf("Yes\n");
		else
		if(a[0][0]=='0' && a[1][1]=='0'&& a[2][2]=='0')
		printf("Yes\n");
		else
		if(a[0][2]=='0' && a[1][1]=='0'&& a[2][0]=='0')
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
