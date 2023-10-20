#include<stdio.h>
int main()
{
	int n,i,j,count;
	float a[20][20],sum;
	printf("nhap n: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("ma tran a la: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%.2f \t",a[i][j]);
		}
	printf("\n");
	}
	printf("Tong cac phan tu tren duong cheo chinh la: ");
	sum =0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				sum+=a[i][j];
			}
		}
	}
	printf("%.2f",sum);
	printf("\nTong binh phuong cac phan tu khi i-j chan la: ");
	sum =0;
	count =0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(abs(i-j)%2==0){
				count++;
				sum+=a[i][j]*a[i][j];
			}
		}
	}
	printf("%.2f",sum);
	printf("\nCo %d phan tu khi i-j chan",count);
}
