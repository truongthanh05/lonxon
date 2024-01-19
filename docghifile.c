#include<stdio.h>
void nhapfile(int a[],int *n,char tenfile[50]){
	printf("nhap so luong phan tu \n");
	scanf("%d",n);
	FILE *f;
	f=fopen(tenfile,"w");
	if (f == NULL) {
        printf("Khong the mo file de ghi.\n");
        return;
    }

	for(int i=0;i<*n;i++){
		printf("\na[%d] = ",i+1);
		 scanf("%d", &a[i]);
		fprintf(f,"%d ",a[i]);
	}
	fclose(f);
	
}
void docfile(int a[],int *n,char tenfile[50]){

	FILE *f;
	f=fopen(tenfile,"r");
	if (f == NULL) {
        printf("Khong the mo file de doc.\n");
        return;
    }
    int i=0;
    while(!feof(f)){// kiểm tra file đẫ kết thúc chưa
    		fscanf(f,"%d",&a[i]);//nếu file chưa kết thúc sẽ thực hiện dòng fscanf 	
    		i++;
	}
	*n=i-1;//số lượng giá trị đọc được bằng số phần tử
	fclose(f);
	
}
void hienthi(int a[],int n){
	for(int i=0;i<n;i++){
	printf("\na[%d] = %d",i+1,a[i]);
		
	}
}
int main(){
int a[100];
int n;
//nhapfile(a,&n,"matran.txt");
docfile(a,&n,"matran.txt");
hienthi(a,n);
	return 0;
}