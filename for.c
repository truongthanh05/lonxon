#include<stdio.h>
int main(){
	int i=0;
	int sum=0;
	for( ;i<10 ; ){
		sum+=i;
		++i;
		
	}
	printf("\asum = %d\n",sum);
	return 0;
}