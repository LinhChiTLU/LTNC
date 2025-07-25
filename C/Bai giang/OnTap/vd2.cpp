#include <stdio.h>
int main(){
int n;
char c;
printf("Nhap so n = "); scanf("%d",&n);
printf("Nhap ky tu c = "); scanf("%c",&c);
printf("In ra n: %d, c: %c", n, c);
printf("\nNhap so n = "); scanf("%d",&n);
fflush(stdin); 
printf("Nhap ky tu c = "); scanf("%c",&c);
printf("In ra n: %d, c: %c", n, c);
return 0;
} 
