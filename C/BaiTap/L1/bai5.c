#include<stdio.h>
#include<math.h>
int main(){
	float d1,d2,d3;
	printf("Diem Mieng = ");scanf("%f",&d1);
	printf("Diem Mot Tiet = ");scanf("%f",&d2);
	printf("Diem Hoc Ky = ");scanf("%f",&d3);
	float tb = (d1+d2*2+d3*3)/6;
	printf("Diem TB = %g",tb);
	return 0;
} 
