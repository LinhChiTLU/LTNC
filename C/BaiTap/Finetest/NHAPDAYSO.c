#include<stdio.h>
int main(){
	int n,a[100];
	printf("N = ");scanf("%d",&n);
	int dem=0;
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);scanf("%d",&a[i]);
	}
	printf("Day A =");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]<0)
		{
			dem++;
		 } 
	}
	printf("\nSo so am trong A: %d",dem);
	
} 
