#include<stdio.h>
#define N 10
void nhap(int arr[N][N],int a,int b){
	puts("nhap cac phan tu mang : ");
	int i,j;
	for(i=0;j<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}
void xuat(int arr[N][N],int a, int b){
	int i,j;
	for(i=0;j<a;i++){
		for(j=0;j<b;j++){
			printf(" so phan tu: %5d",arr[i][j]);}}
	
}
int main(){
	int arr[N][N];
	int a,b;
	puts("nhap so hang , so cot : ");
	scanf("%d%d",&a,&b);
	nhap(arr,a,b);
	xuat(arr,a,b);
	return 0;
	
}