#include <stdio.h>
#include <string.h>

struct SinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void themSinhVien(struct SinhVien sinhViens[], int *soLuong);
void inThongTinSinhVien(struct SinhVien sinhViens[], int soLuong);
int main(){
    struct SinhVien sinhViens[50]={
         {"abc1", "Nguyen Van A", 11, "0123451231"},
        {"abc2", "Nguyen Van B", 12, "0987656782"},
        {"abc3", "Nguyen Van C", 13, "0912371298"},
        {"abc4", "Nguyen Van D", 14, "0943794373"},
        {"abc5", "Nguyen Van E", 15, "0934565445"},
    };
    
    int soLuongHienTai=5;
    printf(" Thong Tin Sinh Vien Truoc Khi Them \n");
    inThongTinSinhVien(sinhViens, soLuongHienTai);
    themSinhVien(sinhViens, &soLuongHienTai);
    printf("\n Thong Tin Sinh Vien Sau Khi Them \n");
    inThongTinSinhVien(sinhViens, soLuongHienTai);

    return 0;
}
void themSinhVien(struct SinhVien sinhViens[], int *soLuong){
    struct SinhVien svMoi;
    printf("\nNhap thong tin sinh vien moi:\n");
    printf("ID: ");
    scanf("%d", &svMoi.id);
    printf("Ten: ");
    scanf(" %49[^\n]", svMoi.name);
    printf("Tuoi: ");
    scanf("%d", &svMoi.age);
    printf("So dien thoai: ");
    scanf(" %14s", svMoi.phoneNumber);
    sinhViens[*soLuong] = svMoi;
    (*soLuong)++;
}
void inThongTinSinhVien(struct SinhVien sinhViens[], int soLuong){
    for(int i=0; i<soLuong; i++){
        printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n",
               sinhViens[i].id, sinhViens[i].name, sinhViens[i].age, sinhViens[i].phoneNumber);
    }
}
