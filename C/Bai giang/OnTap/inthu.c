#include<stdio.h>
int main(){
	int n;
	printf("Nhap mot so nguyen khong am: ");scanf("%d",&n);
	int a;
	switch(n%7){
		case 0: printf("Chu Nhat");break;
		case 1: printf("Thu Hai");break;
		case 2: printf("Thu Ba");break;
		case 3: printf("Thu Tu");break;
		case 4: printf("Thu Nam");break;
		case 5: printf("Thu Sau");break;
		case 6: printf("Thu Bay");
	}
	return 0;
} 
