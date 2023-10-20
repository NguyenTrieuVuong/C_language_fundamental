#include<stdio.h>
#include<math.h>
void nhapmt (float a[20][20], int m, int n)
{
	int i,j;
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		printf("a[%d][%d]=",i,j);
		scanf("%f",&a[i][j]);
	}
}
void xuatmt(float a[20][20], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
			printf("%.2f \t",a[i][j]);
			}
		printf("\n");
}
void nhanmt (float a[20][20], float b[20][20], int m, int n)
{
	int i,j,k;
	float c[20][20],sum;
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			sum=sum+a[i][k]+b[k][j];
			c[i][j]=sum;
		}
	printf("ma tran nhan la: \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++)
			{
			printf("%.2f \t",c[i][j]);
			}
		printf("\n");
			
	}
}
int main()
{
	int m,n;
	printf("nhap so hang so cot ma tran a: ");
	scanf("%d%d",&m,&n);
	float a[20][20],b[20][20];
	nhapmt(a,m,n);
	xuatmt(a,m,n);
	printf("nhap so hang so cot ma tran b: ");
	nhapmt(b,n,m);
	xuatmt(b,n,m);
	nhanmt(a,b,m,n);
}


