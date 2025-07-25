#include<stdio.h>
int main(){
	int n;
	printf("N = ");scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf(" %d",i);
	}
	printf("\n"); 
	for(int i=n;i>0;i--){
		printf(" %d",i);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		if(i<n-1) printf("%d ",i);
		else printf("%d",i);
	} 
	int m;
	printf("\nM = ");scanf("%d",&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(j<m-1) 
			printf("0 ");
			else printf("0"); 
		}
		printf("\n");
	} 
} 
