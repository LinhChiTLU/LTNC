#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double Snto=0,Scphuong=0; 
	printf("Nhap so nguyen n(n>0): ");scanf("%d",&n);
	
	for(int i=1;i<n;i++){
		int k=sqrt(i);
		if(k*k==i)
			Scphuong+=i;
		}
	printf("Tong chinh phuong <n = %g",Scphuong);
	for(int i=1;i<n;i++){
		int kt =1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				kt =0;
				break;
			}
		} 
		if(i>1&&kt) Snto+=i;
	}
	printf("\nTong nguyen to <n = %g",Snto);
	return 0;
} 
