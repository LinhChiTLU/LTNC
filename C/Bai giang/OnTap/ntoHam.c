#include<stdio.h>
#include<math.h>
int nto(int n){
	if(n==0||n==1) return 0;
	if(n==2) return 1;
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;
		}
		return 1;
	}
}
int main(){
	int n;
	int s=0;
	printf("Nhap n: ");scanf("%d",&n);
	printf("Cac so nguyen to la:");
	for(int i=0;i<=n;i++){
		if(nto(i)) {
			printf(" %d",i);
			s+=i;
		}
	}
	printf("\nTong cac so nguyen to la: %d",s);
	return 0;
}
