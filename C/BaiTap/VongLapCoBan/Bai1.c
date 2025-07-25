#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so n nguyen duong: ");scanf("%d",&n);
	} while(n<0);
	int d=0; //c1
	for(int i=1;i<=n;i+=2){
			d++;
		} 
		printf("So cac so nguyen le: %d\n",d);
	int i=1,d1=0; //c2
	while(i<=n){
		d1++;
		i += 2; 
	}	
	printf("So cac so nguyen le: %d\n",d1);
	return 0;
}
