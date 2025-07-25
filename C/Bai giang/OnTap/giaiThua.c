#include<stdio.h>
int main(){
	int n;
	long gt=1;
	printf("Cho n = ");scanf("%d",&n);
	if(n<0) printf("n la so am.Khong co giai thua");
	else {
		for(int i=1 ;i<=n;i++){
			gt*=i;
		}
		printf("%d! = %ld",n,gt);
	}
	return 0;
}
