#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n: ");scanf("%d",&n);
	int s=0;
	if(n==1||n==0) printf("Day khong phai la so nguyen to");
	for(int i=2;i<=n;i++){
		int nto =1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				nto=0;
				break;	
			}
		}
		if(nto) {
			printf(" %d",i);
			s+=i;
	}
	}
	printf("Tong cua so nguyen to do la: %d",s);
	return 0;
}
