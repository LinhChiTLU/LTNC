#include<stdio.h>
#include<math.h>
int main(){
	float x,fx;
	printf("Nhap x: ");scanf("%f",&x);
	if(x!=1&&x!=-1) fx =  (pow(x,3)+x+1)/(pow(x,2)-1);
	else fx=3;
	printf("f(x) =%g",fx);
	return 0;
} 
