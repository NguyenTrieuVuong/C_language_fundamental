#include<stdio.h>
#include<math.h>
double chuoi(int n,float x){
	int i;
	double TS,MS,S,a;
	TS=1;MS=1;S=1;
	for(i=1;i<=n;i++){
		TS=TS*x;
		MS=MS*i;
		a=TS/MS;
		S+=a;
	}
	return S;
}
int main(){
	double x,tong;
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("\nNhap x: ");
	scanf("%lf",&x);
	tong=chuoi(n,x);
	printf("\nTong la: %lf\n",tong);
}
