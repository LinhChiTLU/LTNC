#include<stdio.h>
int main(){
	float a1,b1,c1,a2,b2,c2,x,y,dx,dy,d;
	printf("Nhap cac he so cua PT:\n");
	printf("a1, b1, c1 = ");scanf("%f %f %f",&a1,&b1,&c1);
	printf("a2, b2, c2 = ");scanf("%f %f %f",&a2,&b2,&c2);
	d=a1*b2-a2*b1;
	dx=c1*b2-c2*b1;
	dy=a1*c2-a2*c1; 
	if(d!=0){
		x=dx/d;
		y=dy/d;
		printf("He pt co 2 nghiem x = %f, y = %f",x,y);
	}
	else 
		if(dx==0)
			printf("He PT vo so nghiem");
		else
			printf("He pt vo nghiem!");
	return 0;
} 
