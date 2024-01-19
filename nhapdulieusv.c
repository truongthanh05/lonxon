#include<stdio.h>
#include<conio.h>
#include<string.h>
struct ngaythangnam{
	int ngay;
	int thang;
	int nam;
};
struct sv{
	int ms;
	char hodem[100];
	char ten[100];
	struct ngaythangnam date;
	float diem;
	
};
void nhap(struct sv a[],int n,int i){
	printf("\n nhap ma so : ");
	scanf("%d",&a[i].ms);
	getchar();
	printf("\n nhap ho dem : ");
	fgets(a[i].hodem,sizeof(a[i].hodem),stdin);
	printf("\n nhap ten : ");
	fgets(a[i].ten,sizeof(a[i].ten),stdin);
	printf("\n nhap ngay thang nam sinh : ");
	scanf("%d%d%d",&a[i].date.ngay,&a[i].date.thang,&a[i].date.nam);
	printf("\n nhap diem thi dai hoc : ");
	scanf("%f",&a[i].diem);
	
}
void xem(struct sv a[],int n,int i){
	printf("\n  ma so : %d ",a[i].ms);
	printf("\n nhap ho dem : %s ",a[i].hodem);
	printf("\n  ten : %s ",a[i].ten);
	printf("\n  ngay thang nam sinh : %d/%d/%d ",a[i].date.ngay,a[i].date.thang,a[i].date.nam);
	printf("\n  diem thi dai hoc : %.2f ",a[i].diem);
}
void sx(struct sv a[],int n){
	for(int i=0;i<n-1;i++){
		if(a[i].diem>a[i+1].diem){
			float tg;
			tg=a[i].diem;
			a[i].diem=a[i+1].diem;
			a[i+1].diem=a[i].diem;
		}
	}
	printf("\n\t\tdiem dai hoc giam dan ")
	for(int i=0;i<n;i++){
		xem(a,n,i);
	}
}
int main(){
	int n;
	printf("nhap so luong sv : ");
	scanf("%d",&n);
	struct sv a[n];
	for(int i=0;i<n;i++){
		printf("\n \t thong tin sv %d ",i+1);
		nhap(a,n,i);
	}
	for(int i=0;i<n;i++){
		xem(a,n,i);
	}
	sx(a,n);
	return 0;
}