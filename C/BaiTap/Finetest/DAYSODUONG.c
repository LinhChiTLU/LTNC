#include<stdio.h>
int main(){
	int n;
	int dem=0;
	do{
		printf("Hay nhap mot so duong: ");scanf("%d",&n);
		if(n<=0) break;
		dem++;
	}while(n>0);
	printf("Ban da nhap %d so nguyen duong!",dem);
	return 0;
}
