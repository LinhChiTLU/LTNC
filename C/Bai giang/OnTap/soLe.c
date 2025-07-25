#include<stdio.h>
int main(){
	int i; 
//	for(i = 1; i<100;i++){
//		if(i%2==1) printf("%5d",i);
//		if((i+1)%20==0) printf("\n");
//	}
//	for(i=1;i<100;i+=2){
//		printf("%5d",i);
//		if((i+1)%20==0) printf("\n");
//	} 
	for(i=99;i>0;i-=2){
		printf("%5d",i);
		if((i-1)%20==0) printf("\n");
	}
	return 0;
} 
