#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("N = ");scanf("%d",&n);
//	int s=0,m=0;
////	while(s+m+1<n){
////		m++;
////		s+=m;
////	}
 	int s=0,m;
 	for(m=1;;m++){
 		if(s+m>=n) break;
 		s+=m;
	 }
	printf("m lon nhat = %d",m-1);
} 
