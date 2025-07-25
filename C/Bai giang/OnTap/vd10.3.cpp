#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c, delta;
	printf("Nhap a: ");scanf("%f",&a);
	printf("Nhap b: ");scanf("%f",&b);
	printf("Nhap c: ");scanf("%f",&c);
	delta = b*b - 4*a*c;
	if(a==0){
		if(b==0){
		if(c!=0) printf("pt vo nghiem");
		else printf("pt vo so nghiem");
		}
		else
			printf("pt co 1 nghiem la: %g",-c/b);
	}
	else if (delta <0) printf("pt vo nghiem");
	else if (delta ==0) printf("pt co 2 nghiem kep x1 = x2 = %.0f",-b/(2*a));
	else{
		printf("pt co 2 nghiem phan biet: x1 = %.0f va x2 = %.0f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
	}
	return 0;
}
