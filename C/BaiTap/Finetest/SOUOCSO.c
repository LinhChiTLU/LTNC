#include<stdio.h>
int main(){
	int n;
	printf("N = ");scanf("%d",&n);
	int dem=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			dem++;
		}
	}
	printf("So %d co %d uoc so.",n,dem);
}
