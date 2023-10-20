#include <stdio.h>
#include <math.h>
int main(){
	float x,y;
	printf("Tinh gia tri bieu thuc y = x/(x^2+1)");
	printf("\nNhap x: ");
	scanf("%f", &x);
	y = x/(pow(x,2)+1);
	printf("Gia tri cua y = %f", y);
}
