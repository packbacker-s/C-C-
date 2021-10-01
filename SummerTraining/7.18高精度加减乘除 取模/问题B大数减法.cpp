#include <stdio.h>
#include <string.h>
#define maxn 100000
char ans[maxn];
char* strrev(char* s)
{
    char* h = s;
    char* t = s;
    char ch;

    while(*t++){};
    t--;
    t--;
    while(h < t)
    {
        ch = *h;
        *h++ = *t;
        *t-- = ch;
    }
    return(s);
}
int judge(char *a, char *b){
  int lena=strlen(a);
  int lenb=strlen(b);
  if(lena>lenb) return 1;
  if(lena<lenb) return -1;
  return strcmp(a,b);
}
const char *num_sub(char *a, char *b){
  char aa[maxn],bb[maxn];
  memset(aa,0,sizeof aa);
  memset(bb,0,sizeof bb);
  memset(ans,0,sizeof ans);
  char *as=ans;
  int cnt=judge(a,b);
  bool bo=false;
  if(cnt>0){
    strcpy(aa,a);
    strcpy(bb,b);
    bo=false;
  }else if(cnt<0){
    strcpy(aa,b);
    strcpy(bb,a);
    bo=true;
  }else{
    ans[0]='0';
    return as;
  }
  int lena=strlen(aa);
  int lenb=strlen(bb);
  strrev(aa);
  strrev(bb);
  int i;
  for(i=0;;i++){
    if(i<lena&&i<lenb){
      if(aa[i]>=bb[i]){
        ans[i]=aa[i]-bb[i]+'0';
      }else {
        ans[i]=aa[i]-bb[i]+10+'0';
        for(int j=i+1;;j++){
          if(aa[j]=='0') aa[j]='9';
          else{
            aa[j]--;
            break;
          }
        }
      }
    }else if(i<lena){
      ans[i]=aa[i];
    }else if(i<lenb){
      ans[i]=bb[i];
    }else break;
  }
  while(i--){
    ans[i+1]='\0';
    if(ans[i]-'0'>0){
      break;
    }
  }
  if(bo) ans[i+1]='-';
  strrev(ans);
  return as;
}
char a[maxn],b[maxn];
int main(){
  while(~scanf("%s %s", a, b)){
    printf("%s\n", num_sub(a,b));
  }
  return 0;
}
