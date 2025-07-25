#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("Nhap canh thu nhat: ");scanf("%f",&a);
	printf("Nhap canh thu hai: ");scanf("%f",&b);
	printf("Nhap canh thu ba: ");scanf("%f",&c);
	if(a>0 && b>0 && c>0 && a+b>c && b+c>a && a+c>b) {
		printf("Day la 3 canh tam giac");
		if(a==b&&b==c) printf("\nDay la tam giac deu");
		else if(a==b||b==c||a==c) printf("\nDay la tam giac can");
		else if(a*a +b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) 
		printf("\nDay la tam giac vuong"); 
		else printf("\nDay la tam giac thuong");
	}
	else printf("Khong phai canh cua tam giac!");
	return 0;
}
