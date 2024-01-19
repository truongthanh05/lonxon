#include<stdio.h>
unsigned long long giaithua(int n){
	if (n==0 || n==1)
	return 1;
	else 
	return n * giaithua(n-1);
}
int main(){
	int i;
	for (i=0; i<=100;i++){
		printf("%d! = %llu\n",i,giaithua(i));
	}
	
	return 0;
}