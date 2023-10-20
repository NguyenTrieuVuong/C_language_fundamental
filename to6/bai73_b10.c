#include<stdio.h>
#include<math.h>
double chuoiex(double x){
	int i;
	double TS,MS,S,a;
	TS=1;MS=1;S=1;
	a=1;
	i=1;
	while(a>0.00001){
		TS=TS*x;
		MS=MS*i;
		a=TS/MS;
		S+=a;
		i++;
	}
	return S;
}
int main(){
	double x,tong;
	printf("Nhap x: ");
	scanf("%lf",&x);
	tong = chuoiex(x);
	printf("Tong la: %lf", tong);
	printf("\nHam co san exp(%.1lf)=%lf",x,exp(x));
}
	
