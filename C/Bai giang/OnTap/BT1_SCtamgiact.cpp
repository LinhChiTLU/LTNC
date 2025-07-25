#include<stdio.h>
int main(){
	float a,b;
	printf("Nhap chieu dai: ");scanf("%f",&a);
	printf("Nhap chieu rong: ");scanf("%f",&b);
	double s = a*b;
	double c = (a+b)*2;
	printf("Dien tich hinh chu nhat la: %g",s);
	printf("\nChu vi hinh chu nhat la: %g",c);
	return 0;
}


