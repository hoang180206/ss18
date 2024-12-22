#include <stdio.h>
#include <string.h>

struct SinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void hienThiSinhVien(struct SinhVien danhSach[], int soLuong);
int chenSinhVien(struct SinhVien danhSach[], int soLuong, int viTri, struct SinhVien sinhVienMoi);

int main(){
    struct SinhVien danhSach[50]={
         {"abc1", "Nguyen Van A", 11, "0123451231"},
        {"abc2", "Nguyen Van B", 12, "0987656782"},
        {"abc3", "Nguyen Van C", 13, "0912371298"},
        {"abc4", "Nguyen Van D", 14, "0943794373"},
        {"abc5", "Nguyen Van E", 15, "0934565445"},
    };

    int soLuongSinhVien=5;
    hienThiSinhVien(danhSach, soLuongSinhVien);
    struct SinhVien sinhVienMoi;
    printf("\nNhap thong tin sinh vien moi:\n");
    printf("ID: ");
    scanf("%d", &sinhVienMoi.id);
    getchar();
    printf("Ten: ");
    fgets(sinhVienMoi.name, sizeof(sinhVienMoi.name), stdin);
    sinhVienMoi.name[strcspn(sinhVienMoi.name, "\n")] = 0;
    printf("Tuoi: ");
    scanf("%d", &sinhVienMoi.age);
    getchar();
    printf("SDT: ");
    fgets(sinhVienMoi.phoneNumber, sizeof(sinhVienMoi.phoneNumber), stdin);
    sinhVienMoi.phoneNumber[strcspn(sinhVienMoi.phoneNumber, "\n")] = 0;

    int viTri;
    printf("\nNhap vi tri can chen (tu 0 den %d): ", soLuongSinhVien);
    scanf("%d", &viTri);
    soLuongSinhVien = chenSinhVien(danhSach, soLuongSinhVien, viTri, sinhVienMoi);
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
int chenSinhVien(struct SinhVien danhSach[], int soLuong, int viTri, struct SinhVien sinhVienMoi){
    if(viTri<0 || viTri>soLuong){
        printf("\nVi tri khong hop le\n", soLuong);
        return soLuong;
    }
    for(int i=soLuong; i>viTri; i--){
        danhSach[i]=danhSach[i-1];
    }
    danhSach[viTri]=sinhVienMoi;
    return soLuong+1;
}

