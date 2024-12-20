#include<stdio.h>
struct SinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[50];
};
typedef struct SinhVien SinhVien;
int main(){
    SinhVien arrSinhVien[50];
    for(int i=0; i<5; i++){
        arrSinhVien[i].id=i+1;
        printf("Moi ban nhap ten sv thu %d :", i+1);
        fgets(arrSinhVien[i].name, 50, stdin);
        for(int k=0; k< 50; k++){
            if(arrSinhVien[i].name[k] =='\n'){
                arrSinhVien[i].name[k]='\0';
            }
        }        
        printf("Moi ban nhap tuoi sv thu %d :", i+1);
        scanf("%d", &arrSinhVien[i].age);
        getchar();
        printf("Moi ban nhap sdt sv thu %d :", i+1);
        fgets(arrSinhVien[i].phoneNumber, 40, stdin);
    }
    for(int i=0;i<5; i++){
        printf("%d \t", arrSinhVien[i].id);
        printf("%s \t", arrSinhVien[i].name);
        printf("%d \t", arrSinhVien[i].age);
        printf("%s \t", arrSinhVien[i].phoneNumber);
        printf("\n");
    }
    return 0;
}

