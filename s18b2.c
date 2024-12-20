#include<stdio.h>
struct SinhVien{
    char name[50];
    int age;
    char phoneNumber[15];
};
int main(){
    struct SinhVien sv1;
    printf("Moi ban nhap ten sinh vien: ");
    fgets(sv1.name, 50, stdin);
    printf("Moi ban nhap tuổi sinh vien: ");
    scanf("%d", &sv1.age);
    getchar();
    printf("Moi ban nhap sdt sinh vien: ");
    fgets(sv1.phoneNumber, 50, stdin);
    printf("Ten: %s", sv1.name);
    printf("Tuoi: %d\n", sv1.age);
    printf("SDT: %s\n", sv1.phoneNumber);
    return 0;
}


