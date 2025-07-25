#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so nguyen duong: ");scanf("%d",&n);
	}while(n<0);
	double s=1;
	for(int i=1;i<=n;i++){
		s*=i;
	}
	printf("%d! = %g",n,s);
	
	int i=1;
	double s2=1;
	while(i<=n){
		s2*=i;
		i++;
	}
	printf("\n%d! = %g",n,s2);
	return 0;
}
