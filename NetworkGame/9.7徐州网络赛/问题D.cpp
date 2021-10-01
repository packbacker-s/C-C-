#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 100000 + 7;
char T[maxn];
char S[maxn];
char t[maxn];
char s[maxn];
int main() {
  scanf("%s", T);
  int q;
  scanf("%d", &q);
  while(q--) {
    scanf("%s", S);
    int lenT = strlen(T);
    int lenS = strlen(S);
    if(lenT = lenS && strcmp(T, S) = 0)
    printf("jntm!\n");
    if(lenT = lenS && strcmp(T, S) != 0)
    printf("friend!\n");
    if(lenT > lenS) {
      for(int i = 0; i < lenS; i++) {
        for(int j = 0; j < lenT; j++) {
          if(t[i] == s[j]) {
            i++; j++;
          }
          else {
            i++; j = 0;
          }
        }
      }
    }
  }
  return 0;
}

/*#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std; 
typedef struct seqstring{
	char string[100005];
	int length;
}seqstring;

void getnext(seqstring p,int next[]){
	int i,j;
	next[0]=-1;//next[0]放上-1
	i=0;//指向字符串每个字符的指针
	j=-1;
	while(i<p.length){//没有到达结尾的话
		if(j==-1||p.string[i]==p.string[j]){//如果是第一个字符或遇到相同的字符
			i++;j++;next[i]=j;
		}
		else
			j=next[j];
	}

}

int kmp(seqstring t,seqstring p,int next[]){
	int i,j;
	i=j=0;
	while(i<t.length&&j<p.length){
		if(j==-1||t.string[i]==p.string[j]){
			i++;j++;
		}
		else
			j=next[j];
	}
	if(j==p.length) return 1;
	else return -1;
}
int main(){
	seqstring t,p;
	int next[100005];
	cin>>t.string;
	t.length=strlen(t.string);
	int N;
	cin>>N;
	while(N--){
	cin>>p.string;
	p.length=strlen(p.string);
	if(t.length==p.length)
	{
		if(strcmp(p.string,t.string)==0)
		cout<<"jntm!"<<endl;
		else
		cout<<"friend!"<<endl;
	}
	else if(t.length>p.length){
		getnext(p,next);
		if(kmp(t,p,next)==1)
		cout<<"my child!"<<endl;
		else
		cout<<"oh, child!"<<endl;
	}
	else if(t.length<p.length){
		getnext(t,next);
		if(kmp(p,t,next)==1)
		cout<<"my teacher!"<<endl;
		else
		cout<<"senior!"<<endl;
	}
	}
	return 0;
}
*/
