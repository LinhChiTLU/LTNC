#include<stdio.h>
int main(){
	int  n;
	float a[100];
	printf("N = ");scanf("%d",&n);
	int dem=0;
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);scanf("%f",&a[i]);
	}
	printf("Day A =");
	for(int i=0;i<n;i++){
		printf(" %g",a[i]);
	}
	float min = a[0];
	for(int i=1;i<n;i++){
		if(a[0]>a[i])
		{
			min=a[i];
		} 
	}
	printf("\nGia tri nho nhat trong A: %g",min);
	
} 
