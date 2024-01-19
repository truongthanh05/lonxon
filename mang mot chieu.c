#include<stdio.h>
const int MAX = 100;
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int arr[MAX] ;
	int i;
for(i=0;i<=MAX;i++){
	arr[i]=rand();}
	for (i=0;i<=MAX;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	
	
	return 0;
	
}