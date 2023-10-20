#include<stdio.h>
int main()
{
	int n,m,p,i,j,k,f,sum1,sum2;
	float a[20][20],b[20][20],c[20][20],d[20][20],e[20][20];
	printf("nhap so hang va cot cua ma tran a, b va c \n");
	scanf("%d%d%d",&n,&m,&p);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("ma tran a la \n");
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n;j++)
		{	
			printf("%.2f \t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%f",&b[i][j]);
		}
	}
	printf("ma tran b la \n");
	for(i=0;i<m;i++)
	{	
		for(j=0;j<m;j++)
		{	
			printf("%.2f \t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("c[%d][%d]=",i,j);
			scanf("%f",&c[i][j]);
		}
	}
	printf("ma tran c la \n");
	for(i=0;i<p;i++)
	{	
		for(j=0;j<p;j++)
		{	
			printf("%.2f \t",c[i][j]);
		}
		printf("\n");
	}
	printf("ma tran tich cua axb la \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum1=0;
			for(k=0;k<n;k++)
			{
				sum1=sum1+a[i][k]*b[k][j];
			}
		d[i][j]=sum1;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%.2f \t",d[i][j]);
		}
		printf("\n");
	}
	printf("ma tran tich cua axbxc la \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<p;j++)
		{
			sum2=0;
			for(f=0;f<n;f++)
			{
				sum2=sum2+c[i][f]*d[f][j];
			}
		e[i][j]=sum2;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%.2f \t",e[i][j]);
		}
		printf("\n");
	}
}
	
	

