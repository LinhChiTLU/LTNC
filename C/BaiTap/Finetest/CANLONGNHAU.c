#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("N = ");scanf("%d",&n);
	double f=sqrt(n); 
	for(int i=n-1;i>=1;i--){
		f=sqrt(i+f);
	}
	printf("F(n) = %g",f);
	return 0;
} 
