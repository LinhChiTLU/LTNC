#include<stdio.h>
int main(){
	int n;
	double s=0; 
	printf("Nhap n: ");scanf("%d",&n);
	printf("Cac so chinh phuong trong khoang tu 1 den %d la:",n); 
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(j*j==i){
				printf(" %d",i);
				s+=i;
				break; 
			}
		}
	}
	printf("\nTong cac so chinh phuong la: %lf",s);
	return 0; 
}
