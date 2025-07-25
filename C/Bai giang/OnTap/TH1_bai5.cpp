#include<stdio.h>
#include<math.h>
int main(){
	int x, t;
	printf("Nhap so dien tieu thu (kWh): ");scanf("%d",&x);
	if(x<0) printf("So lieu khong hop le!");
	else {
		if(x<=50) t = x*1806;
		else if (x<=100) t = 50*1806 + (x-50)*1866;
			else if(x<=200) t = 50*1806 + 50*1866 + (x-100)*2167;
				else if (x<=300)  t= 50*1806 + 50*1866 + 100*2167 + (x-200)*2729;
					else if (x<=400)  t= 50*1806 + 50*1866 + 100*2167 + 100*2729 + (x-300)*3050;
						else t= 50*1806 + 50*1866 + 100*2167 + 100*2729 + 100*3050 + (x-400)*3151;
	printf("So tien dien phai tra la: %d VND",t);
		}
	return 0;	
	}
