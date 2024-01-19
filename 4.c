#include<stdio.h>
void nhap( int a[],int n){
	for( int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
int ktr(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]==0){
			return 1;
		}
	}
	return 0;
}
int doixung(int a[],int n){
	int tn=0;
	for(int i=0;i<n;i++){
		int m=a[i];
		while(m>0){
			tn=tn*10+m%10;
			m/=10;
			}
			if(tn==a[i]){
				return 1;
			}
	}
	return 0;
}
void tang(int a[],int n){
	int t;
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
			
		}	
	}
	for(int i=0;i<n;i++){
		printf(" %d ",a[i]);}
	
	
}
int main(){
	int n;
	printf("\n nhap so luong phan tu trong mang n= ");
scanf("%d",&n);
	int a[n];
	nhap(a,n);
	/*if(ktr(a,n)==1){
		printf("co so 0");
	}
	else printf("khong co so 0");*/
	/*if(doixung(a,n)==1){
		printf("co doi xung");
	}
	else printf("khong doi xung");*/
	tang(a,n);
	return 0;
}