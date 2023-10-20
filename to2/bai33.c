#include<stdio.h>
int main()
{
	int i,n;
	float a[20];
	printf("nhap so phan tu mang \n");
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	for(i=2;i<n;i++)
	{
		a[i]=a[i-2]+a[i-1];
	}
	printf("day fibo la: ");
	for(i=2;i<n;i++)
	{
		printf("%.2f \t",a[i]);
	}
	printf("\n");
}

