#include<stdio.h>
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void tanggiam(int a[],int n){
	for(int i=0;i<n;i++){
		int t;
		for(int j=n-1;j>i;j--){
			if(a[j]%2==0){
				if(a[j]<a[j-1]){
					t=a[j];
					a[j]=a[j-1];
					a[j-1]=t;
				}
			}
			else{
			if(a[j]>a[j-1]){
					t=a[j];
					a[j]=a[j-1];
					a[j-1]=t;
				}	
			}
		}
	}
	for(int i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
}

int main(){
	int n;
	printf("nhap so phan tu mang : ");
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	tanggiam(a,n);
}