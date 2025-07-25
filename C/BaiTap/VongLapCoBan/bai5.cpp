#include<stdio.h>
#include<math.h>
int nto(int  n){
	if(n==0||n==1) return 0;
	if(n==2) return 1 ;
	else{
		for(int i=2;i<n;i++){
			if(n%i==0) return 0;
		}
		return 1;
	}
}

int cphuong(int n){
	int k=sqrt(n);
	if (n<=0) return 0;
	else {
	 	if(k*k==n) return 1;
		else return 0;
		}
}
int main(){
	int n;
	do{
		printf("Nhap vao so nguyen duong: ");scanf("%d",&n);
	}while(n<0);
	
	for(int i=0;i<=n;i++){
		if(nto(i) == 1|| cphuong(i) == 1) printf("%d ",i);
	}

	printf("Cac so chinh phuong la:" );
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(j*j==i){
				printf("%d ",i);
				break; 
			}
		}
	}

	printf("\nCac so nguyen to la: ");
	for(int i =1;i<=n;i++){
		int nto =1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0) {
				nto=0;
				break;
			}
		}
		if(nto) printf("%d, ",i);
	}
	
	return 0;
}
