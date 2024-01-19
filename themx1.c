#include<stdio.h>
#include<math.h>
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void xoax(int a[],int n,int k){
	if(k<0 || k>n) return;
for(int i=k; i<n-1; i++)
a[i]=a[i+1];
n--;
	for(int i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
}
void xoaam(int a[],int n){
	int count=0;
	for(int i=0; i<n; i++){
	if(a[i]<0){
		a[i]=a[i+1];
		count++;
}}
n-=count;
for(int i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
}
void chuyen0(int a[],int n){
	int count1=0,count2=0;
	int tg;
	for(int i=0; i<n; i++){
		
	if(a[i]==0){
		tg=a[i];
		a[i]=a[i-count1+count2];
		a[i-count1+count2]=tg;
		count2++;}
		count1++;

}
for(int i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
}
void mang2k(int a[],int n){
	int count1=0,count2=0;
	int tg,tong=1;
	for(int i=0; i<n; i++){
		
	for(int j=1;j<=sqrt(a[i]);j++){
	tong*=2;
	if(tong==a[i]){
		tg=a[i];
		a[i]=a[i-count1+count2];
		a[i-count1+count2]=tg;
		count2++;
		break;}
}
tong=1;
count1++;
}
//n-=count;//số phần tử của mảng không có số âm
for(int i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
}
void daytang(int a[],int n){
	for(int i=0; i<n; i++){
		int tang,c;
		int b=a[i]%10;
		a[i]/=10;
		while(a[i]>0){
			tang=a[i]%10;
			a[i]/=10;
			if(b>tang){
				c=0;
			}
			else{
				c=1;
				break;
			}
			b=tang;
		}
		if(c==0){
			printf(" %d ",a[i]);}
		}}
	
int main(){
	int n;
	printf("nhap so phan tu mang : ");
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	int k,x;
//	printf("nhap vi tri can xoa");
//	scanf("%d",&k);
	//xoax(a,n,k);
//	xoaam(a,n);
//chuyen0(a,n);
//mang2k(a,n);
daytang(a,n);

	return 0;
}