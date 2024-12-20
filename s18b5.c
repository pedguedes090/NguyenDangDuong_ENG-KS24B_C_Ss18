#include<stdio.h>
struct SinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[50];
};
typedef struct SinhVien SinhVien;
int main(){
	int num = 5;
    int find;
	printf("Nhap ID cua sinh vien can chinh sua: ");
    scanf("%d", &find);
    SinhVien arrSinhVien[50]={
        {1,"Nguyen Van A",18,"0436254324"},
        {2,"Nguyen Van B",19,"0432454332"},
        {3,"Nguyen Van C",20,"0342354343"},
        {4,"Nguyen Van D",21,"0432454334"},
        {5,"Nguyen Van E",22,"0432454342"},
    };
    for (int i = 0; i < num; i++) {
        if (arrSinhVien[i].id == find) {
            printf("Thong tin hien tai cua sinh vien:\n");
            printf("ID: %d\n", arrSinhVien[i].id);
            printf("Ten: %s\n", arrSinhVien[i].name);
            printf("Tuoi: %d\n", arrSinhVien[i].age);
            printf("So dien thoai: %s\n", arrSinhVien[i].phoneNumber);

            printf("\nNhap ten moi: ");
            getchar();
            fgets(arrSinhVien[i].name,100, stdin);
            printf("Nhap tuoi moi: ");
            scanf("%d", &arrSinhVien[i].age);

            break;
        }
    }
	 printf("\nDanh sach sinh vien sau khi chinh sua:\n");
    for (int i = 0; i < num; i++) {
        printf("ID: %d\n", arrSinhVien[i].id);
        printf("Ten: %s\n", arrSinhVien[i].name);
        printf("Tuoi: %d\n", arrSinhVien[i].age);
        printf("So dien thoai: %s\n", arrSinhVien[i].phoneNumber);
    }
}
