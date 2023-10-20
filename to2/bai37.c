#include<stdio.h>
float nhapmang(int n, float a[50])
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
	return 0;
}
float xuatmang(int n, float a[50])
{
	int i;
	printf("mang vua nhap la: \n");
	for(i=0; i<n; i++)
	{
		printf("%.2f \t",a[i]);
	}
	printf("\n");
	return 0;
}
float daonguocmang(int n, float a[50])
{
	int i;
	printf("mang sau sap xep la \n");
	for(i=n;i>=0;i--)
	{
		printf("%.2f \t",a[i]);	
	}
}	
int main()
{
	int i,n;
	float a[50];
	printf("nhap so phan tu mang \n");
	scanf("%d",&n);
	nhapmang(n,a);
	xuatmang(n,a);
	daonguocmang(n,a);
}


