#include<stdio.h>
int main(){
	int m,n;
	printf("M = ");scanf("%d",&m);
	printf("N = ");scanf("%d",&n);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			printf("0");
			if(j<n) printf(" ");
		}
		printf("\n");
	}
	return 0;
} 
