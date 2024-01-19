#include <stdio.h>
#include <string.h>

struct donthuoc {
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

void nhapfile(struct cuahang *ch, char tenfile[50]) {
    FILE *f;
    f = fopen(tenfile, "w");
    if (f == NULL) {
        printf("Khong the mo file de ghi.\n");
        return;
    }

    printf("\nnhap thong tin cuahang:\n");
    printf("Nhap so luong don thuoc: ");
    scanf("%d", &ch->madonthuoc);
    fprintf(f, "%d ", ch->madonthuoc);
    getchar();

    printf("Nhap ten bac si : ");
    fgets(ch->tenbs, sizeof(ch->tenbs), stdin);
    fprintf(f, "%s", ch->tenbs);

    printf("Nhap ten benh nhan : ");
    fgets(ch->tenbn, sizeof(ch->tenbn), stdin);
    fprintf(f, "%s", ch->tenbn);

    // G?i hàm nh?p danh sách don thu?c
    for (int i = 0; i < ch->madonthuoc; i++) {
        printf("\nnhap thong tin thuoc %d ", i + 1);
        getchar(); // Xóa ký t? '\n' còn l?i trong buffer

        printf("\nnhap ten thuoc :  ");
        fgets(ch->dsdonthuoc[i].tenthuoc, sizeof(ch->dsdonthuoc[i].tenthuoc), stdin);
        fprintf(f, "%s ", ch->dsdonthuoc[i].tenthuoc);

        printf("\nnhap sl thuoc :  ");
        scanf("%d", &ch->dsdonthuoc[i].sl);
        fprintf(f, "%d ", ch->dsdonthuoc[i].sl);

        printf("\nnhap don gia thuoc :  ");
        scanf("%f", &ch->dsdonthuoc[i].dgia);
        fprintf(f, "%.2f ", ch->dsdonthuoc[i].dgia);

        getchar(); // Xóa ký t? '\n' còn l?i trong buffer
        printf("\nnhap biet duoc thuoc :  ");
        fgets(ch->dsdonthuoc[i].bduoc, sizeof(ch->dsdonthuoc[i].bduoc), stdin);
        fprintf(f, "%s ", ch->dsdonthuoc[i].bduoc);
    }

    fclose(f);
}

void hienthiCuahang(struct cuahang ch) {
    printf("\nThong tin cuahang:\n");
    printf("Ma don thuoc: %d\n", ch.madonthuoc);
    printf("Ten bac si: %s\n", ch.tenbs);
    printf("Ten benh nhan: %s\n", ch.tenbn);

    // Hi?n th? danh sách don thu?c
    printf("\nDanh sach don thuoc:\n");
    for (int i = 0; i < ch.madonthuoc; i++) {
        printf("Don thuoc %d:\n", i + 1);
        printf("Ten thuoc: %s\n", ch.dsdonthuoc[i].tenthuoc);
        printf("So luong: %d\n", ch.dsdonthuoc[i].sl);
        printf("Don gia: %.2f\n", ch.dsdonthuoc[i].dgia);
        printf("Biet duoc: %s\n", ch.dsdonthuoc[i].bduoc);
    }
}

float tinhTongTienDonThuoc(struct donthuoc dt) {
    return dt.sl * dt.dgia;
}

float tinhTongTienCuaHang(struct cuahang ch) {
    float tongTien = 0;
    for (int i = 0; i < ch.madonthuoc; i++) {
        tongTien += tinhTongTienDonThuoc(ch.dsdonthuoc[i]);
    }
    return tongTien;
}

void sapXepTheoTongTien(struct cuahang *ch) {
    float tongTien[50];
    for (int i = 0; i < ch->madonthuoc; i++) {
        tongTien[i] = tinhTongTienDonThuoc(ch->dsdonthuoc[i]);
    }

    for (int i = 0; i < ch->madonthuoc - 1; i++) {
        for (int j = ch->madonthuoc - 1; j > i; j--) {
            if (tongTien[j] < tongTien[j - 1]) {
                float tg = tongTien[j];
                tongTien[j] = tongTien[j - 1];
                tongTien[j - 1] = tg;

                struct donthuoc temp = ch->dsdonthuoc[j];
                ch->dsdonthuoc[j] = ch->dsdonthuoc[j - 1];
                ch->dsdonthuoc[j - 1] = temp;
            }
        }
    }
}

void lietKeDonThuocChoKhachHang(struct cuahang ch, char tenKhachHang[30]) {
	getchar();
    printf("\nDanh sach don thuoc da ban cho khach hang %s:\n", tenKhachHang);
    for (int i = 0; i < ch.madonthuoc; i++) {
        if (strstr(ch.tenbn, tenKhachHang) != NULL) {
            printf("Don thuoc %d:\n", i + 1);
            printf("Ten thuoc: %s\n", ch.dsdonthuoc[i].tenthuoc);
            printf("So luong: %d\n", ch.dsdonthuoc[i].sl);
            printf("Don gia: %.2f\n", ch.dsdonthuoc[i].dgia);
            printf("Biet duoc: %s\n", ch.dsdonthuoc[i].bduoc);
        }
    }
}

void dieuChinhTenBacSi(struct cuahang *ch, char tenKhachHang[30], char tenBacSiMoi[30]) {
    for (int i = 0; i < ch->madonthuoc; i++) {
        if (strstr(ch->tenbn, tenKhachHang) != NULL) {
            strcpy(ch->tenbs, tenBacSiMoi);
            printf("Da dieu chinh ten bac si trong don thuoc cho khach hang %s.\n", tenKhachHang);
            return;
        }
    }
    printf("Khong tim thay don thuoc cho khach hang %s.\n", tenKhachHang);
}

int main() {
    struct cuahang ch;
    printf("Nhap so luong don thuoc: ");
    scanf("%d", &ch.madonthuoc);

    nhapfile(&ch, "docthuoc.txt");
    hienthiCuahang(ch);

    printf("\n\nTong tien cua hang thu duoc: %.2f\n", tinhTongTienCuaHang(ch));

    sapXepTheoTongTien(&ch);

    printf("\nDanh sach don thuoc sau khi sap xep theo tong tien:\n");
    hienthiCuahang(ch);

    lietKeDonThuocChoKhachHang(ch, "X");

    char tenBacSiMoi[30];
    printf("Nhap ten bac si moi: ");
    fgets(tenBacSiMoi, sizeof(tenBacSiMoi), stdin);
    dieuChinhTenBacSi(&ch, "X", tenBacSiMoi);

    printf("\nDanh sach don thuoc sau khi dieu chinh ten bac si:\n");
    hienthiCuahang(ch);

    return 0;
}
