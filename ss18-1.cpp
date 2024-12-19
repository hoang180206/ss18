#include<stdio.h>
#include<string.h>

struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[50];
};
int main(){
	SinhVien sv01;
	strcpy(sv01.name, "Nguyen Viet Hoang");
    sv01.age=18;
	strcpy(sv01.phoneNumber, "0926340967");
	printf("Ho va ten: %s\n", sv01.name);
	printf("Tuoi: %d\n", sv01.age);
	printf("So Dien Thoai: %s", sv01.phoneNumber);
	
	return 0;
}
