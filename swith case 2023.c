#include<stdio.h>
int main(){
	int luachon;
	do{
	
	int a,b,sum,tru,nhan,chia;
	long chiadu;
	printf("\t======MENU=======");
	printf("\n1.tong hai so nguyen \n2.tru hai so nguyen \n3.nhan hai so nguyen \n4.chia hai so nguyen \n5.chia du hai so nguyen \n0.thoat \nlua chon cua ban la:");
  scanf("%d",&luachon);
  
	switch(luachon){
		case'1':{
			printf("\n\anhap hai so nguyen:");
			scanf("%d%d",&a,&b);
			sum=a+b;
			printf("\n\aket qua la: %d+%d=%d",a,b,sum);
			break;
		}
		case'2':{
		printf("\n\anhap hai so nguyen:");
			scanf("%d%d",&a,&b);
			tru=a-b;
			printf("\n\aket qua la: %d-%d=%d",a,b,tru);
			break;
			
	}
	case 3:{
		printf("\n\anhap hai so nguyen:");
			scanf("%d%d",&a,&b);
			nhan=a*b;
			printf("\n\aket qua la: %d*%d=%d",a,b,nhan);
		
		
		break;
	}
	case 4:{
	printf("\n\anhap hai so nguyen:");
			scanf("%d%d",&a,&b);
			chia=a/b;
			printf("\n\aket qua la: %d/%d=%d",a,b,chia);
		
		
		break;
		
	}
	case 5:{
		printf("\n\anhap hai so nguyen:");
			scanf("%d%d",&a,&b);
			chiadu= a%b;
			printf("\n\aket qua la: %ld",chiadu);//chu ý ph?n bi?n khác v?i cái case khác g?n hon
		
		
		break;
	}
	case 0:{
		printf("\a\a\a\nTHOAT!");
		break;
	}
	default:printf("khong co lua chon phu hop");}
	

	
}
while(luachon=0);
return 0;
}