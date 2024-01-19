#include<stdio.h>
#include<string.h>
#include<conio.h>
struct nhanvien{
	int ms;
	char hoten[100];
	char ngaysinh[50];
	char ns[100];
	int luong;
};
void nhap(struct nhanvien a[],int *i){

		printf("nhap thong tin nv %d ",*i+1);
		getchar();
		printf("\nnhap ms ");
		scanf("%d",&(a+*i)->ms);
		getchar();
	    printf("\nnhap ho ten ");
	    fgets((a+*i)->hoten,sizeof((a+*i)->hoten),stdin);
	    printf("\nnhap ngay sinh ");
	    fgets((a+*i)->ngaysinh,sizeof((a+*i)->ngaysinh),stdin);
	    printf("\nnhap noi sinh ");
	    fgets((a+*i)->ns,sizeof((a+*i)->ns),stdin);
	    printf("\nnhap luong ");
		scanf("%d",&(a+*i)->luong);
		
	
}
void xem(struct nhanvien a[],int i){

		printf(" thong tin nv %d",i+1);
		printf("\n ms : %d",a[i].ms);
	    printf("\n ho ten : %s",a[i].hoten);
	    printf("\n ngay sinh : %s",a[i].ngaysinh);
	    printf("\n noi sinh : %s",a[i].ns);
	    printf("\n luong : %d",a[i].luong);
		
		
	
}
void them(struct nhanvien a[],int *n,int *k){
	printf("vi tri muon them : ");
	scanf("%d",k);
	if(*k<=0 || *k>*n+1){
		printf("\nvi tri them khong hop le \n");
		return;
	}
	for(int i=*n;i>*k;i--){
		a[i]=a[i-1];
	}
	(*n)++;
	nhap(a,k-1);
}

int main(){
	int n;
	int k;
	printf("so luong nhan vien : ");
	scanf("%d",&n);
	struct nhanvien a[n];
		for(int i=0;i<n;i++){
	nhap(a,&i);
}
	them(a,&n,&k);
	for(int i=0;i<n;i++){
		xem(a,i);
	}
	return 0;
}