#include <stdio.h>
#include <math.h>
#define y(x) (x>0)?(pow(x,2)):(x+1)
int main(){
	float x;
	printf("Tinh gia tri bieu thuc");
	printf("\nNhap x: ");
	scanf("%f", &x);
	printf("Gia tri cua y = %.2f", y(x));
}
