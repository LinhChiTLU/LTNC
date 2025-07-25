#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("Nhap a: ");scanf("%f",&a);
	printf("Nhap b: ");scanf("%f",&b);
	printf("Nhap c: ");scanf("%f",&c);
	float delta = b*b-4*a*c;
	if(a!=0){
		if(delta == 0){
		printf("Phuong trinh co nghiem kep x1=x2= %f",-b/(2*a));
	}
	else if (delta<0) printf("Phuong trinh vo nghiem");
	else {
		float x1=(-b+sqrt(delta))/(2*a);
		float x2=(-b-sqrt(delta))/(2*a);
		printf("Phuong trinh co 2 nghiem phan biet: x1= %g x2= %g",x1,x2);
	}
	} 
	else {
		if (b==0){
			if(c==0) printf("Phuong trinh co vo so nghiem");
		    else printf("Phuong trinh vo nghiem"); 
		} 
		else{
			float x3 = -c/b;
			printf("Phuong trinh co nghiem duy nhat x = %g",x3); 
		} 
		
	} 
	
	return 0;
} 
