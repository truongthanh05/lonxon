#include<stdio.h>

int main(){
	int a,b;
	long sum,phep_tru,phep_nhan,chia;
	printf("nhap hai so nguyen : ");
	scanf(" %d%d",&a,&b);
	sum = a+b;
	printf("\ntong hai so nguyen : %d+%d = %li",a,b,sum);
	phep_tru = a-b;
	printf("\ntru hai so nguyen : %d-%d = %li",a,b,phep_tru);
	phep_nhan= a*b;
	printf("\nnhan hai so nguyen : %d*%d = %li",a,b,phep_nhan);
	
	if(b){
chia=a/b;
	printf("\nthuong hai so nguyen : %d/%d = %li",a,b,chia);
	
		}
		else{
			printf("\a\nthuong hai so nguyen la vo nghiem");
		}
	return 0;
}