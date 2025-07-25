#include<stdio.h>
int main(){
	int n;
	printf("N = ");scanf("%d",&n);
	if(n>10) printf("So nhap vao phai be hon 10");
	else{
		printf("Cac so chan trong khoang tu 1 den n:");
		for(int i=2;i<=n;i+=2){
			printf(" %d",i);
		}
	}
	return 0;
}
