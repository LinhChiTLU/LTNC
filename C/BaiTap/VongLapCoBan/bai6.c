#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("Cac so co 3 chu so thoa man dieu kien la:");
	for(int i=100;i<1000;i++){
		a=i/100;
		b=(i/10)%10;
		c=i%10;
		int tong=a*a*a+b*b*b+c*c*c;
		if(tong==i)
		{
			printf(" %d",i);
		}
	}
}
