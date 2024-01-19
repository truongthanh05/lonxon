#include<stdio.h>
#define ba 10
int* nhap (){
	static int ar[ba];
	int i;
	for(i=0;i<ba;i++){
		scanf("%d",&ar[i]);
	}
	return ar;
}
void hienthi(const int ar[]){
	int i;
	for(i=0;i<ba;i++){
		printf("%5d",ar[i]);
	}
}
int linearsearch(int ar[],int x){
	int i;
	for(i=0;i<ba;i++){
	if(ar[i]==x)
		return 1;
	}
	return 0;
}
int timx(int *ar, int x){
	int i,dem=0;
	for(i=0;i<ba;i++){
	if(ar[i]==x)
		++dem;}
		return dem;
}
int main(){
	int *ar;
	ar = nhap();
	hienthi(ar);
	
	int x;
	printf("\nnhap x :");
	scanf("%d",&x);
	
/*		if (linearsearch(ar,x))
		printf("\nton tai x trong mang");
	else
		printf("\nkhong ton tai x trong mang");*/

	printf("so lan xuat hien x : %d lan",timx(ar,x));	
	
	return 0;
}