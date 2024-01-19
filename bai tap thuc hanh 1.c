#include<stdio.h>
int main(){ 
    long a,b,c,max,sum;
     printf("nhap gia tri canh 1 = ");
     scanf("%ld",&a);
      printf("nhap gia tri canh 2 = ");
     scanf("%ld",&b);
     printf("nnhap gia tri canh 3 = ");
     scanf("%ld",&c);
     if(a<0 && b<0 && c<0){
     	printf("\nhay nhap gia tri duong!");
	 }
     max=a;
     if(max<b){
     	max=b;
     	sum=a*a+c*c;
     	if(sum=b*b){
     		printf("\nday la tam giac vuong voi canh huyen = %ld",max);
		 }
	 }
	 else if(max<c){
	 	max=c;
	 	sum=a*a+b*b;
     	if(sum=c*c){
     		printf("\nday la tam giac vuong voi canh huyen = %ld",max);
		 }
		 
	 }
	 else {
	 	max=a;
	 	sum=b*b+c*c;
     	if(sum=a*a){
     		printf("\nday la tam giac vuong voi canh huyen = %ld",max);
		 }
	 }
     




	return 0;
	
}