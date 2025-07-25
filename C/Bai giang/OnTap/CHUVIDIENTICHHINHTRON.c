#include<stdio.h>
#include<math.h>
#define PI 3.1415 
int main(){
	float r;
	printf("Nhap ban kinh duong tron: ");scanf("%f",&r);
	double s= PI *r*r;
	double c= 2* PI *r;
	printf("Dien tich hinh tron: %lf",s); 
	printf("\nChu vi hinh tron: %lf",c);
	return 0;
} 
