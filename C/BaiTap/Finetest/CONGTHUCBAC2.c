#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap a = ");scanf("%d",&a);
	printf("Nhap b = ");scanf("%d",&b);
	printf("Nhap c = ");scanf("%d",&c);
	int y;
	if(b<=c){
		y=a*a+3*a-1;
	}
	else y=0;
	printf("Y = %d",y);
	return 0;
}
