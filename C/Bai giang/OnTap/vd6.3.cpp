#include<stdio.h>
#include<math.h>
int main(){
	float x;
	printf("Nhap x: ");scanf("%f",&x);
	if(x>=1) printf("f(x) = %g",pow(x,5)+ sqrt(x-1)+3*exp(x));
	else printf("f(x) khong xac dinh!");
	return 0;
} 
