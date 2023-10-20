#include<stdio.h>
float nhapmang(int n, float a[50])
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("a[%d]=",i),
		scanf("%f",&a[i]);
	}
	return 0;
}
float xuatmang(int n, float a[50])
{
	int i;
	printf("mang da nhap la: \n");
	for(i=0; i<n; i++)
	{
		printf("%.2f \t",a[i]);
	}
	printf("\n");
	return 0;
}
float tbcmangduong(int n, float a[50])
{
	int i,m=0;
	float b[40],s1,tbcd;
	for(i=0; i<n; i++)
	{
		if(a[i]>0)
		{
			b[m]=a[i];
			m++;
		}
	}
	printf("mang duong la: \n");
	for(i=0; i<m; i++)
	{
		printf("%.2f \t",b[i]);
		printf("\n");	
	}
	s1=0;
	for(i=0; i<m; i++)
	{
		s1=s1+b[i];

	}
	tbcd=s1/m;
	printf("trung binh cong la: tbcd=%.2f \n",tbcd);
	return tbcd;
}
float tbcmangam(int n, float a[50])
{
	int i,k=0;
	float c[40],s2,tbca;
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			c[k]=a[i];
			k++;
		}
	}
	printf("mang am la: \n");
	for(i=0; i<k; i++)
	{
		printf("%.2f \t",c[i]);
		printf("\n");	
	}
	s2=0;
	for(i=0; i<k; i++)
	{
		s2=s2+c[i];

	}
	tbca=s2/k;
	printf("trung binh cong la: tbca=%.2f \n",tbca);
	return tbca;
}
int main()
{
	int i,n;
	float a[50];
	int m;
	float b[50];
	int k;
	float c[50];
	printf("nhap so phan tu mang a \n");
	scanf("%d",&n);
	nhapmang (n,a);
	xuatmang (n,a);
	tbcmangduong(n,a);
	tbcmangam(n,a);
}
