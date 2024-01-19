#include<stdio.h>
#include<math.h>
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void ktr(int a[],int b[],int n,int m){
		int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		count=0;
	}
	if(count==n){
		printf("a la mang con cua b ");
	}
	else
	printf("a la khong mang con cua b ");
}
void chia2mang(int a[],int n,int b[],int c[]){
	int count1=0,count2=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			b[count1]=a[i];
			count1++;
		}
		else{
			c[count2]=a[i];
			count2++;
		}
		}
	printf("\n mang b: ");
	for(int i=0;i<count1;i++){
		printf(" %d ",b[i]);
		}
	printf("\n mang c: ");
	for(int i=0;i<count2;i++){
		printf(" %d ",c[i]);
	}
}
int main(){
	int n,m;
	printf("nhap so phan tu mang a : ");
	scanf("%d",&n);
	int a[n];
	int b[n],c[n];
	nhap(a,n);
/*	printf("nhap so phan tu mang b : ");
	scanf("%d",&m);
	int b[m];
	nhap(b,m);
	ktr(a,b,n,m);*/
//chia2mang(a,n,b,c);
	return 0;
}
