#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

//tinh trung binh cong cac so nguyen to
//khai bao nguyen mau protype
void nhapmang();
int KiemTraSoNguyenTo();
float tinhTBC();
//ham nhap mang
void nhapmang(int A[],int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        printf("mang A[%d]",i);
        scanf("%d",&A[i]);
    }
}
// ham kiem tra
int KiemTraSoNguyenTo(int n)
{
    int i;
    if (n<=1)
    {
        return 0;
    }

    for (i=2;i<n;i++)
        {
             if (n%i==0)
                {
                    return 0;
                }
        }
   return 1;




}
/* int kiemtra(int A[],int n)
{ int i;
if(A[i]<=1)
return 0;
for(i=0;i {
if(i%2==0||%i=0)
return 0;
}
return 1;
}*/
//ham tinh tong
float tinhTBC(int A[],int n)
{
    int i,s=0;
    float dem=0;
    for(i=0;i<=n;i++)
    {
        if(KiemTraSoNguyenTo(A[i])==1)
        {
            dem++;
            s+=A[i];
        }
    }
    return s/dem;
}
//ham chinh main
int main()
{
int A[100];
int n;
printf("\n nhap so luong phan tu trong mang n= ");
scanf("%d",&n);
nhapmang(A,n);
int i = 0;
for(i=0;i<=n;i++)
{
   printf("%d\n",KiemTraSoNguyenTo(A[i]));
}
printf("tong la %f",tinhTBC(A,n));
getch();

}