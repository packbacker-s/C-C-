#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 1e6 + 7;
int flag[maxn],cnt = 0;

int find(int l,int r,int tar){

	int i;
	for(i = l;i < r;i++){
		if(flag[i]>=tar)
			break;
	}

	if(i==r||(i==l&&flag[l]>tar)){
		return tar;
	}
	if(flag[i]==tar){
		if(i+1<r)
			find(i+1,r,tar+1);
		else
			return tar+1;
	}
	else{
		return tar;
	}

}

bool cmp(int x,int y){
	return x>y;
}
int main()
{

    int n,q;
	scanf("%d%d",&n,&q);

    for(int i = 1;i <= q;i++){
        int op,num;
        scanf("%d%d",&op,&num);
        if(op==1){
            flag[cnt++] = num;
            sort(flag,flag+cnt,cmp);
        }
        else{
            int ans = find(0,cnt,num);
            printf("%d\n",ans);
        }
    }
    return 0;
}
