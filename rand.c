#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int i;
	for(i=0;i<=2;i++)
	{
		int ramdom= 1+rand()%6;
		printf("%5d",ramdom);
	}
	return 0;
}