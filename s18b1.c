#include<stdio.h>
struct SinhVien{
    char name[50];
    int age;
    char phoneNumber[50];
};
int main(){
    struct SinhVien sv1={"nguyen dang duong", 18, "0869974215"};
    printf("Ten: %s\n", sv1.name);
    printf("Tuoi: %d\n", sv1.age);
    printf("SDT: %s\n", sv1.phoneNumber);
    return 0;
}


