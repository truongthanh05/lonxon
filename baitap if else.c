#include<stdio.h>
int a;
int main(){
	printf("\nnhap so tien ban dang co");
	scanf("%d",&a);
	if(a >= 10){
		printf("\ntoi la trieu phu");
	}
	else{
		printf("\ntoi khong la trieu phu");
	}
	const char ba = "toi la trieu phu";
	if(a>= ba){
		a = a+1000;
		printf("\nso tien duoc cong la : %d",a);
	
	}
	else{
		printf("\nso tien duoc cong la 0");
	}
	
	return 0;
	
}