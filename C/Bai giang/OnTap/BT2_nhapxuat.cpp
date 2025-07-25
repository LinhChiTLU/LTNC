#include<stdio.h>
int main(){
	float a,b,c,x;
	printf("Nhap a: ");scanf("%f",&a);
	printf("Nhap b: ");scanf("%f",&b);
	printf("Nhap c: ");scanf("%f",&c);
	printf("Nhap x: ");scanf("%f",&x);
	float fx = a*x*x + b*x + c ;
	printf("f(x) = %g",fx);
	return 0;
}
