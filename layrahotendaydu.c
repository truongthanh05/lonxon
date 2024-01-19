#include<stdio.h>
#include<string.h>
void hoten(char a[],int size){
	char ho[10];
	char ten[10];
	char dem[20];
	int i;
	int j;
	int x;
	for( i=0;a[i]!=' ';i++){
		ho[i]=a[i];
	}
	ho[i]='\0';
	int index=0;
    j=size-2;
    while(j>=0 && a[j]!=' '){
    	j--;
	}
	for(int k=j+1;k<size;k++){
		ten[index]=a[k];
		index++;
	}
	ten[index]='\0';
	int count=0;
    for( x=i+1;x<j;x++){
       	dem[count]=a[x];
       	count++;
	   }
	   dem[count]='\0';
	printf("\nho : ");
	puts(ho);
	printf("\nho dem : ");
	puts(dem);
	printf("\nten : ");
	puts(ten);
}
int main(){
	char a[1000];
	printf("nhap ho ten day du : ");
	fgets(a,sizeof(a),stdin);
	int size=strlen(a);
	a[size-1]='\0';
//	printf("%s",a);
//	printf("\n%c",a[size-2]);
	hoten(a,size);
}