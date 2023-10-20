#include<stdio.h>

float tbc(float x[], int n)
{
	int i,sum = 0;
	for(i=0;i<n;i++)
	{
		sum+=x[i];
	}
	return sum/n;
}
float tbcd(float x[], int n)
{
	int i,sum = 0;
	int duong=0;
	for(i=0;i<n;i++)
	{
		if(x[i]>=0)
		{
			sum+=x[i];
			duong++;
		}
	}
	return sum/duong;
}

int main()
{
	int n,i,sum=0;
	float a[20];
	do
	{
	printf("nhap vao so phan tu cua mang \t");	
	scanf("%d",&n);	
	}
	while(n<1 || n>100);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
	printf("mang vua nhap la \n");
	for(i=0;i<n;i++)
	{
		printf("%.2f \t",a[i]);
	}
	printf("\n");
	printf("tbc: %.2f \n",tbc(a,n));
	float tbcd(float a[], int n);
	if(tbcd>0){
		printf("tbcd: %.2f",tbcd(a,n));
	}else{
		printf("mang ko co so duong \n");
	}
}
