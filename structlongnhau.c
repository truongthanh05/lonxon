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
void nhap(struct sv a[],int n){
	
}
int main(){
	int n;
	printf("nhap so luong sv :");
	scanf("%d",&n);
	struct sv a[n];
	return 0;
}