#include <stdio.h>
#include <string.h>

struct sinhVien{
    char name[100];
    int age;
    char phoneNumber[20];
};
typedef struct sinhVien sinhVien;

void nhapThongTin(sinhVien *sv){
    printf("Nhap ten: ");
    fgets(sv->name, sizeof(sv->name), stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &sv->age);

    fflush(stdin);
    printf("Nhap so dien thoai: ");
    fgets(sv->phoneNumber, sizeof(sv->phoneNumber), stdin);
}

void inThongTin(sinhVien sv){
    printf("Thong tin sinh vien:\n");
    printf("Name: %s", sv.name);
    printf("Age: %d\n", sv.age);
    printf("Phone Number: %s", sv.phoneNumber);
}

int main(){
    sinhVien danhSach[5];

    for(int i = 0; i < 5; i++){
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        nhapThongTin(&danhSach[i]);
        printf("\n");
    }

    printf("\nThong tin cac sinh vien:\n");
    for(int i = 0; i < 5; i++){
        printf("\nSinh vien thu %d:\n", i + 1);
        inThongTin(danhSach[i]);
    }

    return 0;
}
