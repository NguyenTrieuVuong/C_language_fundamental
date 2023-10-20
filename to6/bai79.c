#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float legendre(int n, float x)
{
	if(n==0)
		return 1.0;

	else if(n==1.0)
		return x;
	else 
	return (2.0*n - 1.0)/n*x*legendre(n-1.0,x) - (n-1.0)/n*legendre(n-2.0,x);
}
int main()
{
	int i,n;
	float x; 
	printf("nhap gia tri x, va bac n cua da thuc \n");
	scanf("%f%d",&x,&n);
	printf("chuoi da thuc la: ");
	for(i=0; i<n; i++)
		printf("%.2f \t", legendre(i,x));
	printf("\n");
}
