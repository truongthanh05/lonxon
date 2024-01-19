#include<stdio.h>
int main(){
	char c = getchar();
	printf("%d",c);
	printf("\n%c",c);
	char str[18];
	fflush(stdin);
	gets(str);
	printf("\n%s",str);
	return 0;
	
}