#include<stdio.h>
#include<math.h>
int main(){
	float r;
	printf("Nhap ban kinh cu duong tron: ");scanf("%f",&r);
	float d = M_PI * r*r;
	float c = 2*M_PI*r;
	printf("Dien tich hinh tron la: %.2f",d);
	printf("\nChu vi hinh tron la: %.2f",c);
	return 0;
}
