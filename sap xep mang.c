#include<stdio.h>
const int LENGTH = 10

int* nhap(){
	 static int acb(LENGTH);
	 int i;
	for(i=0;i<LENGTH;i++){
		scanf("%d",&acb[i]);
	}
	return acb;
}
void hienthi(const int acb[]){
	int i;
	for(i=0;i<LENGTH;i++){
	
	printf("%5d",acb[i]);
}
printf("\n");
}
void bubblesort(int acb[]){
	int i,j;
	for(i=0;i<LENGTH-1;i++) {
		for(j=LENGTH-1;j>1;j-- ) {
			if(acb[j]>acb[j-1]){
				int tmp= acb[j];
				acb[j]=acb[j-1];
				acb[j-1]=tmp;
			}
}

}

}
int main(){
	int *acb;
	acb = nhap();
	printf("\ntruoc khi sap xep :");
	hienthi(acb);
	printf("\n");
	printf("\nsau khi sap xep :");
	bubblesort(acb[]);
	
	return 0;
}