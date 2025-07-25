#include<stdio.h>
#include<math.h>
int main(){
	float a,b,x;
	printf("Nhap a: ");scanf("%f",&a);
	printf("Nhap b: ");scanf("%f",&b);
	printf("Nhap x: ");scanf("%f",&x);
	char k;
	printf("Chon bieu thuc: ");scanf(" %c",&k);
	switch(k){
		case 'A': 
			if(b+x!=0) printf("Gia tri bt = %.2f",(pow(a-x,2)/(b+x)));
			else printf("Khong tinh dc gia tri!");break;
		case 'B': 
			if(b>-5) printf("Gia tri bt = %.2f",pow(a+x,2)/sqrt(b+5));
			else printf("Khong tinh dc gia tri!");break;
		case 'C':
			if(a!=0&&a!=-x&&b!=-x) printf("Gia tri bieu thuc = %.2f",(1/a)+(2/(a+x))+(3/(b+x)));
			else printf("Khong tinh dc gia tri!");break;
		default:
			printf("Khong thoa man dieu kien");
	}
	return 0;
}
