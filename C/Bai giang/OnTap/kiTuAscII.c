#include<stdio.h>
#include<math.h>
int main(){
	char c;
	printf("Nhap: ");scanf("%c",&c);
	int ascii = (int) c;
	if(c>='A'&&c<='Z') printf("Day la chu hoa");
	else if(c>='a'&&c<='z') printf("Day la chu thuong");
	else if(c>='0'&&c<='9') printf("Day la so");
	else printf("Day la ki tu dac biet");
	printf("\nMa AscII cua ky tu %c la: %d\n",c,ascii);
	return 0;
} 
