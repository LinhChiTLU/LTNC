#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
	int x=a;
	int y=b;
	while(b!=0){
		int r = a%b;
		a=b;
		b=r;
	}	
	printf("Uoc chung lon nhat cua %d va %d la: %d",x,y,a);
	double s=(x*y)*1.0/a;
	printf("\nBoi chung nho nhat cua %d va %d la: %.4lf",x,y,s);
	return 0;
}
