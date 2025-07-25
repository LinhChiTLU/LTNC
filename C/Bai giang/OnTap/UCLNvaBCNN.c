#include<stdio.h>
int main() {
	int a,b;
	printf("a = ");scanf("%d",&a);
	printf("b = ");scanf("%d",&b);
	int x=a,y=b;
	while(b!=0){
		int r = a%b;
		a=b;
		b=r;
	}
	printf("Uoc chung lon nhat cua a va b la: %d",a);
	printf("\nBoi chung nho nhat cua a va b la: %d",(x*y)/a);
}
