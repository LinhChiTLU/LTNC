#include<stdio.h>
int main(){
	int n;
	double s=0;
	printf("N = ");scanf("%d",&n);
	for(int i=2;i<=n;i++){
		s+=(i-1)*i*(i+1);
	}
	printf("A = %.0lf\n",s);
	return 0;
} 
