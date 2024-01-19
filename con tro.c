#include<stdio.h>
int main(){
	int a=11112,b=2222;
	int *nak=&a;
	int *zu;
	printf("dia chi cua a la: %x",*nak);
	zu=b;
	printf("\nhien thi b la : %d",zu);
	printf("\nhien thi a la : %d",*nak);
	return 0;
	
	
}