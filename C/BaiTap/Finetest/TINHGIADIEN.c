#include<stdio.h>
int main() {
	int n;
	printf("N = ");scanf("%d",&n);
	double tien;
	if(n>=0&&n<=50){
		tien=n*1484;
	}
	else if(n<=100){
		tien = 50*1484+(n-50)*1533;
	}
	else if(n<=200){
		tien = 50*1484+50*1533+(n-100)*1786;
	}
	else if(n<=300){
		tien = 50*1484+50*1533+100*1786+(n-200)*2242;
	}
	else if(n<=400){
		tien = 50*1484+50*1533+100*1786+100*2242+(n-300)*2503;
	}
	else 
		tien = 50*1484+50*1533+100*1786+100*2242+100*2503+(n-400)*2587;
	printf("So tien phai nop: %.0f",tien);
}
