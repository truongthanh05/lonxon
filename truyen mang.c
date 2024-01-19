#include<stdio.h>
#define BA 10


void   nhap (int arr[]){
	
    int i ;
	for(i=0;i<BA;i++){
		scanf("%d", &arr[i]);
	}
}
void hienthi (int arr[]){
    int i ;
	for(i=0;i<BA;i++){
		printf("%5d",arr[i]);
		
		
	}
	printf("\n");
	arr[0]*=100;
}
int main(){
	int arr[BA];
	nhap(arr);
	hienthi(arr);
	hienthi(arr);
	return 0;
}