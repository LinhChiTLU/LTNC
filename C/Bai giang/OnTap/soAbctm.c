#include<stdio.h>
int main(){
	int a,b,c;
//	for(int i=100;i<1000;i++){
//		a=i/100;
//		b=i%100/10;
//		c=i%10;
//		if(a*a*a+b*b*b+c*c*c==i)
//			printf("%d \n",i);
//	}
	for(a=1;a<=9;a++){
		for(b=0;b<=9;b++){
			for(c=0;c<=9;c++){
				if(a*100+b*10+c==a*a*a+b*b*b+c*c*c) printf("%d\n",a*100+b*10+c);
			}
		}
	}
	return 0;
}
