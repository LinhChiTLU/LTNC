#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap vao so nguyen duong: ");scanf("%d",&n); 
	}while(n<=0);
	float s=1,S=0;
	for(int i=1;i<=n;i++){
		s*=i;
		S+=1.0/s;
	}
	printf("Gia tri cua bieu thuc: %f",S);
	
	float s1=1,S1=0;
	int i=1;
	while(i<=n){
		s1*=i;
		S1+=1.0/s1;	
		i++;
	}
	printf("\nGia tri cua bieu thuc: %f",S1);
	return 0;
}
