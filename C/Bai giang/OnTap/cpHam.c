#include<stdio.h>
#include<math.h>
int cp(int n){
	int i=sqrt(n);
	if(n<0) return 0;
	else {
		if(i*i==n) return 1;
		else return 0;
	}
	
}
int main(){
	int n;
	printf("Nhap n: ");scanf("%d",&n);
	int s=0;
	printf("Cac so chinh phuong la:");
	for(int i=0;i<n;i++){
		if(cp(i)){
			printf(" %d",i);
			s+=i;
		}
	}
	printf("\nTong la: %d",s);
}
