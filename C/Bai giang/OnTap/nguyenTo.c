#include<stdio.h>
int main(){
	int n,kt=1;
	printf("Nhap gia tri N = ");scanf("%d",&n);
	if(n<2) kt=0;
	else{
		for(int i=2;i<n;i++){
			if(n%i==0) kt =0;
		}
	}
	if(kt) printf("%d la so nguyen to",n);
	else printf("%d khong phai so nguyen to!",n);
	return 0;
}
