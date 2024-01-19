#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <stdlib.h>
bool  chu(char a[],int i){
	if(a[i]>='A' && a[i]<='Z' ||a[i]>='a' && a[i]<='z' ){
		return true;
	}
	return false;
}
bool  so(char a[],int i){
	if(a[i]>='0' && a[i]<='9' ){
		return true;
	}
	return false;
}
bool  spacewhite(char a[],int i){
	if(a[i]==' ' && a[i]!='\n'){
		return true;
	}
	return false;
}
void ktr(char a[]){
	int countchu=0;
	int countso=0;
	int countspace=0;
	int khac=0;
	int size=strlen(a);
	for(int i=0;i<size;i++){
		if(chu(a,i)){
			countchu++;
		}
		else if(so(a,i)){
			countso++;
		}
		else if(spacewhite(a,i)){
			countspace++;
		}
		
	}
	printf("\n so lan xuat hien a,b,c....z : %d",countchu);
	printf("\n so lan xuat hien so : %d",countso);
	printf("\n so lan xuat hien khoang trang : %d",countspace);
	khac=size-countchu-countso-countspace;
	printf("\n so lan xuat hien ki tu khac : %d",khac);
}
int xhs1(char a[],char b[]){
	int count=0;
	for(int i=0;a[i]!='\0';i++){
			if(strstr(&a[i],b)==&a[i]){
				count++;
			}
	}
	return count;
}
void thays2(char a[],char b[],char c[]){
	int sl=xhs1(a,b);
	int sizea=strlen(a);
	int sizeb=strlen(b);
	int sizec=strlen(c);
	char *res=(char *)malloc(sizea+sl*(sizec-sizeb)+1);
	int i=0;
	int j=0;
	for( i=0;a[i]!='\0';){
			if(strstr(&a[i],b)==&a[i]){
				strcpy(&res[j],c);
				i+=sizeb;
				j+=sizec;
			}
			else{
				res[j]=a[i];
				j++;
				i++;
			}
	}
   res[j] = '\0';
	printf("\nsau sau thay the : ");
	puts(res);
	free(res);
	
}
int main(){
	char a[100];
	char b[100];
	char c[100];
	printf("nhap chuoi s : ");
	fgets(a,sizeof(a),stdin);
	int lena=strlen(a);
	if(lena>0){
		a[lena-1]='\0';
	}
	ktr(a);
	printf("\nnhap chuoi  s1 : ");
	fgets(b,sizeof(b),stdin);
		int lenb=strlen(b);
	if(lenb>0){
		b[lenb-1]='\0';
	}
	printf("\nso lan xuat hien s1 trong s : %d",xhs1(a,b));
	printf("\nnhap chuoi s2 : ");
	fgets(c,sizeof(c),stdin);
	int lenc=strlen(c);
	if(lenc>0){
		c[lenc-1]='\0';
	}
	thays2(a,b,c);
	return 0;
}