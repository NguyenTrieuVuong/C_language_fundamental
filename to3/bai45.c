#include<stdio.h>
int main()
{	
	int m,n,p,q,i,j,k,sum;
	float A[20][20],B[20][20],C[20][20];
	printf("nhap cac phan tu mang A \n");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d]=",i,j);
			scanf("%f",&A[i][j]);
		}
	}
	printf("mang A la: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%.2f \t",A[i][j]);
		}
		printf("\n");
	}
	printf("nhap cac phan tu mang B \n");
	scanf("%d%d",&p,&q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("B[%d][%d]=",i,j);
			scanf("%f",&A[i][j]);
		}
	}
	printf("mang B la: \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{	
			printf("%.2f \t",B[i][j]);
		}
		printf("\n");
	}
	printf("tich cua ma tran A x B la: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
				{	
					sum=sum+A[i][k]*B[k][j];
				}
			C[i][j]=sum;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
			printf("%.2f \t",C[i][j]);
		}
		printf("\n");
	}

	return 0;
}

	
