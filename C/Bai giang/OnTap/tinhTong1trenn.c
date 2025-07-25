#include<stdio.h>
int main(){
	double s=0;
	int n;
	printf("Nhap so tu nhien n: ");scanf("%d",&n);
	if(n<0) printf("Nhap sai");
	else{
		for(int i=1;i<=n;i++){
			s+=1.0/i;
		}
		printf("Tong la: %g",s);
	}
	return 0;
} 
