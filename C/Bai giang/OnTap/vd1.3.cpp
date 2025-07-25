#include<stdio.h>
int main(){
	int c=10,d=20;
	printf("Bien ngoai khoi c = %d; d = %d",c,d);
	{
		int c = 10;
		printf("\nBien trong khoi c = %d; d =%d",c,d);
		printf("\nGia tri cac bien duoc them 10 don vi la");
		c=c+10;
		d+=10;
		printf("Bien trong khoi c =%d; d=%d",c,d);
	}
	printf("\nBien ngoai khoi c = %d; d =%d\n",c,d);
	return 0;
}
