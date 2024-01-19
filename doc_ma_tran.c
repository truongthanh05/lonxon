#include<stdio.h>
void docfile(char tenfile[50]){
	FILE *f;
	char in;
	f=fopen(tenfile,"r");
	if(f==NULL){
		printf("loi khong the mo file!");
		return;
	}
	while((in=fgetc(f))!=EOF){
		putchar(in);
	}
	fclose(f);
}
int main(){
	docfile("docghi.txt");
	return 0;
}