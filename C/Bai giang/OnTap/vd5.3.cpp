#include<stdio.h>
#include<math.h>
int main(){
	float x,fx;
	printf("Nhap x: ");scanf("%f",&x);
	if(x==0) fx=4;
	else {
		if(x<0){
				fx=pow(x,2)-pow(-x,(1.0/5))+3*exp(x);
		}
		else fx=pow(x,2)+pow(x,(1.0/5))+3*exp(x);
	}
	
	printf("f(x) = %g",fx);
	return 0;
} 
