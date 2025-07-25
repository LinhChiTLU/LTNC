#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so nguyen duong: ");scanf("%d",&n);
	}while(n<=0);
	float s=0;
	for(int i=1;i<=n;i++){
		s+=1.0/i;
	}
	printf("Gia tri bieu thuc: %.2f",s);
	float s1=0;
	int i=1;
	while(i<=n){
		s1+=1.0/i;
		i++;
	}
	printf("\nGia tri bieu thuc: %.2f",s1);
	return 0;
}
