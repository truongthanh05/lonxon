#include<stdio.h>

int main(){
	int a,b;
	printf("nhap so nguyen a : ");
	scanf("%d",&a);
	printf("\a\nnhap so nguyen b : ");
	scanf("%d",&b);
	if(a==b){
		printf("\a\na bang b");
		return 0;
}
	if(a>b){
		printf("\a\na lon hon b");
	}
	else{
		printf("\a\na be hon b");
	
}
	return 0;
}