#include<stdio.h>
#include<string.h>
#include<conio.h>
struct donthuoc{
	char tenthuoc[30];
	int sl;
	float dgia;
	char bduoc[15];
	
};
struct cuahang {
    int madonthuoc;
    char tenbs[30];
    char tenbn[30];
    struct donthuoc dsdonthuoc[50];
};
void nhapfile(struct donthuoc a[],int *n,char tenfile[50]){
	FILE *f;
	f=fopen(tenfile,"w");
	if (f == NULL) {
        printf("Khong the mo file de ghi.\n");
        return;
    }

	for(int i=0;i<*n;i++){
		printf("\nnhap thong tin thuoc %d ",i+1);
		getchar();
		printf("\nnhap ten thuoc :  ");
		fgets(a[i].tenthuoc,sizeof(a[i].tenthuoc),stdin);
		fprintf(f,"%s ",a[i].tenthuoc);
		printf("\nnhap sl thuoc :  ");
		scanf("%d",&a[i].sl);
		fprintf(f,"%d ",a[i].sl);
		printf("\nnhap don gia thuoc :  ");
		scanf("%f",&a[i].dgia);
		getchar();
		fprintf(f,"%d ",a[i].dgia);
		printf("\nnhap biet duoc thuoc :  ");
		fgets(a[i].bduoc,sizeof(a[i].bduoc),stdin);
		fprintf(f,"%s ",a[i].bduoc);
		
	}
	fclose(f);
	
}

void hienthi(struct donthuoc a[],int n){
	for(int i=0;i<n;i++){
		printf("thong tin thuoc %d",i+1);
		
	printf("\nten thuoc : %s",a[i].tenthuoc);
	printf("\n sl thuoc : %d ",a[i].sl);
	printf("\n don gia thuoc : %f ",a[i].dgia);
	printf("\n biet duoc thuoc : %s ",a[i].bduoc);
	}
}
void tongtien(struct donthuoc a[],int n){
	float tong;
	for(int i=0;i<n;i++){
		tong=a[i].sl*a[i].dgia;
		printf("\ntong tien cua thuoc %s : %.2f",a[i].tenthuoc,tong);
	}
}
void tongthu(struct donthuoc a[],int n){
	float tong=0;
	for(int i=0;i<n;i++){
		tong+=a[i].sl*a[i].dgia;
	}
	printf("\ntong tien nha thuoc thu duoc  : %.2f",tong);
}
void sx(struct donthuoc a[], int n){
	float b[50];
	for(int i = 0; i < n; i++){
		b[i] = a[i].sl * a[i].dgia;
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = n - 1; j > i; j--){
			if(b[j] < b[j - 1]){
				float tg = b[j];
				b[j] = b[j - 1];
				b[j - 1] = tg;
				struct donthuoc temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	printf("\n\tDanh sach don thuoc sau khi sap xep theo tong tien:\n");
	for(int i = 0; i < n; i++){
		printf("Ten thuoc: %s, So luong: %d, Don gia: %.2f, Biet duoc: %s, Tong tien: %.2f\n",
			a[i].tenthuoc, a[i].sl, a[i].dgia, a[i].bduoc, b[i]);
	}
}

int main(){
	int n;
	char bs[30];
	printf("nnhap ten bac si : ");
	fgets(bs,sizeof(bs),stdin);
	printf("so luong thuoc : ");
	scanf("%d",&n);
	struct donthuoc a[n];
	nhapfile(a,&n,"docthuoc.txt");
	hienthi(a,n);
	tongtien(a,n);
	tongthu(a,n);
	sx(a,n);
	return 0;
}