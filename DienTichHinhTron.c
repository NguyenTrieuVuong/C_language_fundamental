#include <stdio.h>
#include <math.h>
#define PI 3.141
int main(){
	float R,cv,dt;
	printf("Nhap ban kinh hinh tron: ");
	scanf("%f", &R);
	cv=2*R*M_PI;
	dt=pow(R,2)*M_PI;
	printf("Chu vi va dien tich hinh tron = %.2f va %.2f", cv,dt);
}
