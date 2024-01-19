#include<stdio.h>
#include<ctype.h>
int main(){
	char c =getchar();
	if(isblank(c)){
		printf("%c if blank",c);
	}
	else
	printf("%c not is blank",c);
	return 0;
}
