#include<stdio.h>
int main(){
	float diem;
	printf("Nhap diem trung binh: ");scanf("%f",&diem);
	if (diem<0||diem>4) printf("Diem nhap khong hop le!");
	else if(diem<2) printf("Khong dat!");
	else if(diem<2.5) printf("Trug binh!");
	else if(diem<3.2) printf("Kha!");
	else if(diem<3.6) printf("Gioi!");
	else printf("Xuat xac");
	return 0;
}
