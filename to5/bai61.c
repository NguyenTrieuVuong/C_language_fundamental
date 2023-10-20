#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int m,n,i,j,e,f,k,sum;
	int a[20][20],b[20][20],c[20][20];
	printf("nhap so phan tu m,n \n");
	scanf("%d%d",&m,&n);
	printf("nhap so phan tu e,f \n");
	scanf("%d%d",&e,&f);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("nhap a[%d] [%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("xuat mang a: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",a[i][j]);
		
		}
		printf("\n");
	}
	for(i=0;i<e;i++)
	{
		for(j=0;j<f;j++)
		{
			printf("nhap b[%d] [%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("xuat mang b: \n");
	for(i=0;i<e;i++)
	{
		for(j=0;j<f;j++)
		{
			printf("%d \t",b[i][j]);
		}
		printf("\n");
	}
	printf("tich 2 ma tran a x b: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
}
