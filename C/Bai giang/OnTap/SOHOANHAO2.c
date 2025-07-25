#include<stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);

	int dem = 0; 

	for(int i = 1; i <= n; i++){
		int s = 0;
		for(int j = 1; j < i; j++){
			if(i % j == 0){
				s += j;
			}
		}
		if(s == i){
			if(dem == 0){
				printf("Cac so hoan hao la: ");
			}
			printf("%d ", i);
			dem++;
		}
	}

	if(dem == 0){
		printf("Khong co so nao hoan hao trong khoang tu 1 den %d", n);
	}

	return 0;
}

