#include<stdio.h>
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void themx(int a[],int n,int k,int x){
	for(int i=n-1;i>k-1;i--){
		a[i+1]=a[i];
				}
	a[k-1]=x;
	for(int i=0;i<=n;i++){
		printf(" %d ",a[i]);
	}
	
}

int main(){
	int n,a[1000];
	printf("nhap so phan tu mang : ");
	scanf("%d",&n);
	nhap(a,n);
	int k,x;
	printf("nhap vi tri can chen");
	scanf("%d",&k);
	printf("gia tri chen");
	scanf("%d",&x);
	themx(a,n,k,x);
	return 0;
}