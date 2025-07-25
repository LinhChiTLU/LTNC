#include<stdio.h>
#include<math.h>
int main(){
	float x;
	printf("Nhap x = ");scanf("%f",&x);
	if (x>3)
		printf("Ket qua: %.4f",sqrt(x-3)+ log10(pow(x,2)-3));
		else
			if(x==3) printf("Ket qua: %.4f",5);
				else printf("Ket qua: %.4f",pow(x,2)+ pow(sin(2*M_PI*x),4)+1);
	return 0;
}
