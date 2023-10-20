#include<stdio.h>
int main()
{
	int m,n,i,j;
	float a[20][20],b[20][20];
	printf("nhap so hang va so cot cua ma tran a \n");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("ma tran a la: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%.2f \t",a[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("ma tran chuyen vi la: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%.2f \t",b[i][j]);
		}
	printf("\n");
	}
}

