#include<stdio.h>
#include<math.h>
int main(){
	float a,b,max;
	printf("Nhap a = ");scanf("%f",&a);
	printf("Nhap b = ");scanf("%f",&b);
	if(a<b)
		max=b;
	else
		max = a;
	printf("So lon nhat trong 2 so %.4f va %0.4f la: %0.4f",a,b,max);
	return 0;
} 
