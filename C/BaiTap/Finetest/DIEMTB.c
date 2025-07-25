#include<stdio.h>
#include<math.h>
int main(){
	float mieng,tiet,hocky,tb;
	printf("Diem Mieng = ");scanf("%f",&mieng);
	printf("Diem Mot Tiet = ");scanf("%f",&tiet);
	printf("Diem Hoc Ky = ");scanf("%f",&hocky);
	tb=(mieng+tiet*2+hocky*3)/6;
	printf("Diem TB = %g",tb);
	return 0;
}
