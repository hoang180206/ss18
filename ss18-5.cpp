#include <stdio.h>
#include <string.h>

struct SinhVien{
    char id[20];
    char name[20];
    int age;
    char phoneNumber[15];
};
void updateSinhVien(struct SinhVien sinhVien[], int n, char findById[]);

int main(){
    char findById[50];
    struct SinhVien sv[50]={
        {"abc1", "Nguyen Van A", 11, "0123451231"},
        {"abc2", "Nguyen Van B", 12, "0987656782"},
        {"abc3", "Nguyen Van C", 13, "0912371298"},
        {"abc4", "Nguyen Van D", 14, "0943794373"},
        {"abc5", "Nguyen Van E", 15, "0934565445"},
    };

    printf("Moi ban nhap id cua sinh vien can update: ");
    fgets(findById, sizeof(findById), stdin);
    findById[strcspn(findById, "\n")] = '\0';
    updateSinhVien(sv, 5, findById);
    printf("\nDanh sach sinh vien sau khi cap nhat:\n");
    for(int i=0; i<5; i++){
        printf("ID: %s, Ten: %s, Tuoi: %d, SDT: %s\n", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNumber);
    }

    return 0;
}

void updateSinhVien(struct SinhVien sinhVien[], int n, char findById[]){
    int foundIndex= -1;
    for(int i=0; i<n; i++){
        if (strcmp(findById, sinhVien[i].id)==0){
            foundIndex=i;
            break;
        }
    }
    if(foundIndex== -1){
        printf("Khong co id thoa man\n");
    } else {
        printf("Nhap ten moi: ");
        scanf(" %19[^\n]", sinhVien[foundIndex].name);
        printf("Nhap tuoi moi: ");
        scanf("%d", &sinhVien[foundIndex].age);
    }
}
