#include<stdio.h>
int main(){
	int  n;
	printf("N = ");scanf("%d",&n);
	printf("Day so:");
	for(int i=2*n;i<=3*n;i++){
		printf(" %d",i);
	}
	return 0;
} 
