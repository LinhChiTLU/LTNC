#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("N = ");scanf("%d",&n);
	printf("Cac so vua chia het cho 2 vua chia het cho 3 la:");
	for(int i=1;i<=n;i++){
		if(i%2==0&&i%3==0){
			printf(" %d",i);
		}
	}
	return 0;
}
