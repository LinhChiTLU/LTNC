#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap canh a: ");scanf("%d",&a);
	printf("Nhap canh b: ");scanf("%d",&b);
	printf("Nhap canh c: ");scanf("%d",&c);
	if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a){
		printf("Day la tam giac\n");
		if(a==b&&b==c) printf("Day la tam giac deu");
		else if (a==b||b==c||c==a) printf("Day la tam giac can");
		else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b) printf("Day la tam giac vuong");
		else printf ("Day la tam giac thuong");
	}
	else printf("Day khong phai tam giac");
	return 0;
		
} 
