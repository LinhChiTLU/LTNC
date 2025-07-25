#include<stdio.h>
int main(){
	int n;
	printf("N = ");scanf("%d",&n);
	printf("Cac so chia het cho 3 trong khoang N den 2N:");
	for(int i=n;i<=2*n;i++){
		if(i%3==0){
			printf(" %d",i);
		}
	}
}
