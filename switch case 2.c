#include<stdio.h>
int main(){
	int luachon;
	printf("lua chon di thang khon nan");
	printf("\n1. xem cau tai xiu. \n2. tinh tong hai so nguyen \n3.chia lay du hai so nguyen \n4.nhan hai so nguyen \n5.tinh do bao"
			"\n0.thoat khoi man hinh \nlua chon cua ban la?");
			scanf("%d",&luachon);
	int a,b,c,sum;
	switch(luachon){
		case 0:break;
		case 1:{
			printf("\nnhap lan luot so cua ba xuc xac");
			scanf("%d%d%d",&a,&b,&c);
			sum = a+b+c;
			printf("%d + %d + %d = %d",a,b,c,sum);
			if(sum>=11){
				printf("\atai");
			}
			else{printf("\axiu");
			}
			break;
		}
		case 2:{
			printf("nhap hai so nguyen");
			scanf("%d%d",&a,&b);
			printf("\a%d+%d=%d",a,b,a+b);
	
			break;
		}
		char e = '\%';
		case 3:{
			printf("nhap hai so nguyen");
			scanf("%d%d",&a,&b);
			printf("\a%d %c %d =%d",a,e,b,a%b);
		
			
			break;
		}
	
	case 4:{
			printf("nhap hai so nguyen");
			scanf("%d%d",&a,&b);
			printf("\a%d*%d=%d",a,b,a*b);
			break;	
		}	
	}
	return 0;
	
}