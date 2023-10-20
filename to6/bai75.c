#include<stdio.h>
void nhapmang(int n, int m, float a[50][50])
{
	int i,j;
	for( i=0; i<n; i++){
		for( j=0; j<m; j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%f",&a[i][j]);
		}
	}
}
void xuatmang(int n, int m, float a[50][50])
{	int i,j;
	for( i=0; i<n; i++){
		for( j=0; j<m; j++){
			printf("%.2f \t",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int i,j,m,n;
	float a[50][50];
	float b[50][50];
	printf("nhap so hang so cot cua mang a \n");
	scanf("%d%d",&n,&m);
	nhapmang(n,m,a);
	xuatmang(n,m,a);
	printf("nhap so hang so cot cua mang b \n");
	scanf("%d%d",&n,&m);
	nhapmang(n,m,a);
	xuatmang(n,m,a);
}
