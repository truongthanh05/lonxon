#include<stdio.h>
int main(){
     int giatri;
     do{
     	printf("nhap gia tri > 0: \n");
     	scanf("%d",&giatri);
	 }while(giatri<=0);
     printf("gia tri thoa man = %d",giatri);


	return 0;
	
}