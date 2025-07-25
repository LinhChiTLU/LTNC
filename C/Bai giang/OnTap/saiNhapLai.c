#include<stdio.h>
int main(){
	int n;
	do{
		printf("N = ");scanf("%d",&n); 
		if(n<0) printf("Vui long nhap lai\n"); 
	}while(n<0);
} 
