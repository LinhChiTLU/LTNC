#include<stdio.h>
#include<math.h>
int main() {
	int n;
	printf("Nhap n: ");scanf("%d",&n);
	printf("Cac so nguyen to tu 1 den n la:");
	int s=0;
	if(n==0||n==1) printf("Khong phai la so nguyen to");
	for(int i=2;i<=n;i++){
		int k=1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				k=0;
				break;
			} 
		}
		if(k) {
			printf(" %d",i);
			s+=i;
		}
	} 
	printf("\nTong cac so nguyen to: %d",s);
	return 0; 
}
