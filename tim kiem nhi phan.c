#include<stdio.h>
#define n 10
int nhap(int arr[]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void hienthi(int arr[]){
	int i;
	for(i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
void doicho(int arr[]){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(arr[j]<arr[j-1]){
				int tmp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=tmp;
			}
		}
	}
}
int binarysearch(int arr[],int x){
    int left =0; int rigth=n-1;
	int i;
	while(left<=rigth){
		int mid= (left+rigth)/2;
		if(arr[mid]==x)
		return 1;//tìm thấy
		else if(arr[mid]<x)
		left=mid +1;
		else rigth=mid-1;
		
	}
	return 0;
		
	}
int main(){
	int arr[n];
	nhap(arr);
	doicho(arr);
	hienthi(arr);
	int x;
	
while(1){
	printf("\nnhap x= ");
	scanf("%d",&x);
	if (x== -1)
	break;
	if (binarysearch(arr,x))
	printf("\ntim thay ket qua ");
	else printf("\nkhong tim thay ket qua");}
	return 0;
}	
