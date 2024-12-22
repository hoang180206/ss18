#include <stdio.h>
#include <string.h>

struct SinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void hienThiSinhVien(struct SinhVien danhSach[], int soLuong);
int xoaSinhVienTheoTen(struct SinhVien danhSach[], int soLuong, char* tenCanXoa);

int main(){
    struct SinhVien danhSach[50] ={
        {"abc1", "Nguyen Van A", 11, "0123451231"},
        {"abc2", "Nguyen Van B", 12, "0987656782"},
        {"abc3", "Nguyen Van C", 13, "0912371298"},
        {"abc4", "Nguyen Van D", 14, "0943794373"},
        {"abc5", "Nguyen Van E", 15, "0934565445"},
    };
    int soLuongSinhVien=5;
    hienThiSinhVien(danhSach, soLuongSinhVien);
    char tenCanXoa[50];
    printf("\nNhap ten sinh vien can xoa: ");
    fgets(tenCanXoa, sizeof(tenCanXoa), stdin);
    tenCanXoa[strcspn(tenCanXoa, "\n")]=0;
    soLuongSinhVien = xoaSinhVienTheoTen(danhSach, soLuongSinhVien, tenCanXoa);
    hienThiSinhVien(danhSach, soLuongSinhVien);

    return 0;
}
void hienThiSinhVien(struct SinhVien danhSach[], int soLuong){
    printf("\nDanh sach sinh vien:\n");
    for(int i=0; i<soLuong; i++){
        printf("ID: %d, Ten: %s, Tuoi: %d, SDT: %s\n",
               danhSach[i].id, danhSach[i].name, danhSach[i].age, danhSach[i].phoneNumber);
    }
}
int xoaSinhVienTheoTen(struct SinhVien danhSach[], int soLuong, char* tenCanXoa){
    int viTri= -1;
    for(int i=0; i<soLuong; i++){
        if (strcmp(danhSach[i].name, tenCanXoa) == 0){
            viTri=i;
            break;
        }
    }
    if(viTri == -1){
        printf("\nSinh vien voi ten '%s' khong ton tai\n", tenCanXoa);
        return soLuong;
    }
    for (int i=viTri; i<soLuong-1; i++){
        danhSach[i] = danhSach[i+1];
    }
    return soLuong-1;
}
