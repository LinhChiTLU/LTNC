#include<stdio.h>
int main(){
	int a[100][100],n,m;
	printf("Nhap hang: ");scanf("%d",&n);
	printf("Nhap cot: ");scanf("%d",&m);
	printf("Ma tran: \n");
	for(int i=0;i<n;i++){
		if(i==0||i==n-1){
			for(int j =0;j<m;j++){
				printf(" 0");
			}
			printf("\n"); 
		}
		else {
			for(int j=0;j<m;j++){
				if(j==0||j==m-1) printf(" 0");
				else {
					printf(" X");
				}
			}
			printf("\n"); 
		}
	}
}
