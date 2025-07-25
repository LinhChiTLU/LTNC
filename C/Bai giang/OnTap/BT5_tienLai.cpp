#include<stdio.h>
#include<math.h>
int main(){
	double tien = 5000000*pow((1+0.063),10);
	printf("So tien 10 nam co la: %.0f VND",tien);
	int   nam = ceil(log(20000000/5000000) / log (1+0.063));
	printf("\nSau %.d se co it nhat 20 trieu dong",nam);
	return 0;
}
