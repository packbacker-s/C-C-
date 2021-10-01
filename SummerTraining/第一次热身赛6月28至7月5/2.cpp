#include "stdio.h"
#include "string.h"
int str_len(char *p){
	int cnt=0;
	while(*p++!='\0')
	cnt++;
	return cnt;

}
int main(){
	char 	 length,str[30];

	gets(str);
	length=str_len(str);
	printf("length:%c\n",length);
}
