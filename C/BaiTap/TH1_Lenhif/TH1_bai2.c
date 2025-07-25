#include<stdio.h>
#include<math.h>
int main(){
	float x,t;
	printf("Ban hay cho biet so km da di duoc: ");scanf("%f",&x);
	if(x<0) printf("So lieu khong hop le!");
	else{
		if(x<=1) t = ceil(x)*10000;
		else 
			if(x<=30) t = 10000+ (ceil(x)-1)*8000;
			else t = 10000 + 30*8000 + (ceil(x)-31)*6000;
	printf("So tien can tra = %.0f VND",t);
	} 
	return 0;
}
