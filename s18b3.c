#include <stdio.h>

struct student{
	char name[50];
	int age;
	char phoneNumber[50];
};
struct student sv[5];
int main(){
		for(int i=0; i<5; i++){
		printf("Moi ban nhap vao ten cua sinh vien %d: ",i+1);
		fgets(sv[i].name,50,stdin);
		printf("Moi ban nhap vao nam sinh cua sinh vien %d: ",i+1);
		scanf("%d", &sv[i].age);
		getchar();
		printf("Moi ban nhap vao so dien thoai cua sinh vien %d: ",i+1);
		fgets(sv[i].phoneNumber,50,stdin);
	}
	for(int i=0; i<5; i++){
		printf("ten sin vien %d: %s",i+1,sv[i].name);
		printf("tuoi sinh vien %d: %d\n",i+1,sv[i].age);
		printf("so dien thoai cua sinh vien %d: %s\n",i+1,sv[i].phoneNumber);
	}
return 0;
}

