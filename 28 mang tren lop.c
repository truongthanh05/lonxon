#include<stdio.h>
#include<math.h>
void nhap(int b[],int n){
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&b[i]);
	}
}
void tangdan(int b[],int n){
int t;
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(b[j]<b[j-1]){
				t=b[j];
				b[j]=b[j-1];
				b[j-1]=t;
			}
		}	
	}
	for(int i=0;i<n;i++){
		printf(" %d ",b[i]);}
}
void manga(int a[],int b[],int c[],int n,int m){
	int i=0,j=0,k=0;
	while(i<n && j<m){
		if(b[i]>c[j]){
		a[k]=c[j];
			k++;
			j++;
		}
		else{
				
			a[k]=b[i];
			k++;
			i++;
		}
	}
	while(i<n){
			
		a[k]=b[i];
		k++;
			i++;
	}
	while(j<m){
		
		a[k]=c[j];
		k++;
			j++;
	}
	for(int i=0;i<m+n;i++){
		printf(" %d ",a[i]);
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
	printf("nhap so phan tu mang b : ");
	scanf("%d",&n);
	int b[n];
	nhap(b,n);
	printf("nhap so phan tu mang c : ");
	scanf("%d",&m);
	int c[m];
	nhap(c,m);
	tangdan(b,n);
	printf("\n");
	tangdan(c,m);
	int a[m+n];
	printf("\n");
	manga(a,b,c,n,m);
	return 0;
}