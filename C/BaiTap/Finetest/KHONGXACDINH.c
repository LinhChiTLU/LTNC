#include<stdio.h>
#include<math.h>
int main(){
	int x;
	printf("Nhap x = ");scanf("%d",&x);
	if(x>=0&&x!=3){
		printf("Ket qua: %g",(1+sqrt(x))*1.0/(x-3));
	}
	else printf("Bieu thuc khong xac dinh");
	return 0;
}
