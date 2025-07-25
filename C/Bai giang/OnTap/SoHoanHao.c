#include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");scanf("%d",&n);
	int s=0;
	for(int i=1;i<n;i++) {
		if(n%i==0){
			s+=i;
		}
	}
	if(s!=n)  printf("Day khong phai so hoan hao");
	else printf("Day la so hoan hao");
} 
