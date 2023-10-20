#include<stdio.h>
int main()
{
	float a[20];
	int i,n,j,tg;
	printf("nhap so phan tu mang \n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%f",&a[i]);;
	}
	printf("mang a la \t");
	for(i=0;i<n;i++){
		printf("%.2f \t",a[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	printf("mang tang dan la \t:");
	for(i=0;i<n;i++){
		printf("%.2f \t",a[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	printf("mang giam dan la \t:");
	for(i=0;i<n;i++){
		printf("%.2f \t",a[i]);
	}
}
