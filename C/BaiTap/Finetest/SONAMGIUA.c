#include<stdio.h>
int main(){
	float a,b,c;
	printf("A = ");scanf("%f",&a);
	printf("B = ");scanf("%f",&b);
	printf("C = ");scanf("%f",&c);
	if(a>=b&&a<=c || a>=c&&a<=b ){
		printf("X = %g",a); 
	}
	else 
		if(b>=a && b<=c || b>=c && b<=a  ){
			printf("X = %g",b); 
		} 
		else {
			if(c<=a&&c>=b || c<=b&&c>=a){
				printf("X = %g",c); 
			}
		}
	return 0;
}
