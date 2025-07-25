#include<stdio.h>
#include<math.h>
int main(){
	int sl,dg;
	float tien;
	printf("So luong: ");scanf("%d",&sl);
	printf("Don gia: ");scanf("%d",&dg);
	if(sl<0 && dg<0) printf("So lieu khong hop le");
	else{
		if(sl<=4) tien=sl*dg;
		else if(sl<10) tien = sl*dg*0.85;
		else tien = sl*dg*0.7;
	printf("So tien phai tra: %g",tien);
	}
	return 0;
}
