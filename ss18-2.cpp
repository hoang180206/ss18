#include<stdio.h>
#include<string.h>

struct sinhVien{
    char name[100];
    int age;
    char phoneNumber[10];
};
typedef struct sinhVien sinhVien;

void nhap(sinhVien *B){
    fflush(stdin);
    printf("Nhap ten: ");
    fgets(B->name, sizeof(B->name), stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &B->age);
    fflush(stdin);
    printf("Nhap phone number: ");
    fgets(B->phoneNumber, 10, stdin);
}
    
int main(){
    sinhVien B;
    nhap(&A);

    printf("\nThong tin sinh vien:\n");
    printf("Name: %s", B.name);
    printf("Age: %d\n",B.age);
    printf("Phone Number: %s\n",B.phoneNumber);

    return 0;
}
