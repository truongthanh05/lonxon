#include<stdio.h>

int main(){
	int tu1,mau1,tu2,mau2;
	printf("nhap phan so 1 tu va mau");
	scanf("%d%d",&tu1,&mau1);
	printf("nhap phan so 2 tu va mau");
	scanf("%d%d",&tu2,&mau2);
	int a=mau1;
	int b=mau2;
	while(mau1!=mau2){
		if(mau1>mau2){
			mau1=mau1-mau2;
		}
		else if(mau2>mau1){
			mau2=mau2-mau1;
		}
	}
	int tu=a*tu2+b*tu1;
	int mau=a*b/mau1;
	printf("cong hai phan so = %d / %d",tu,mau);
	return 0;
}