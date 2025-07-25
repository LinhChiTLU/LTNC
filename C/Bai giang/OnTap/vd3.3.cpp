#include<stdio.h>
int main(){
	printf("giai phuwong trinh: ax+b=0");
	float a,b,x;
	printf("\na=");scanf("%d",&a);
	printf("b=");scanf("%d",&b);
//	if(a==0 && b ==0) printf("Vo so nghiem");
//	if(a==0&&b!=0) printf("Pt vo nghiem");
//	if(a!=0) printf("pt co 1 nghiem = %g",-b/a);
	if(a==0){
		if(b!=0) printf("pt vo nghiem");
		else printf("pt vo so nghiem");
	}
	else
	printf("pt co 1 nghiem la: %g",-b/a);
	return 0;
}
