#include<stdio.h>
float nhapmang(int n, float a[50])
{
	printf("nhap so phan tu mang \n");
	scanf("%d",&n);
	int i; 
	for(i=0; i<n; i++)
	{
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
	return 0;
}
float xuatmang(int n, float a[50])
{
	int i;
	for(i=0;i<n;i++){
			printf("%.2f \t",a[i]);
		}
	printf("\n");
	return 0;	
}
float gopmang(int n, float a[50], int m, float b[50], int p, float c[100])
{
	p=n+m;
	int i,j;
	if(a[i]<b[j])
	{
		c[p]=a[i];
		p++;
		i++;
	}else if(a[i]>=b[j])
	{
		c[p]=b[j];
		p++;
		j++;
	}
	for(i=0; i<p; i++)
	{
		printf("%.2f",c[i]);
	}
	return 0;
}
int main(){
	int i,n,m,p;
	float a[50];
	float b[50];
	float c[100];
	nhapmang(n,a);
	nhapmang(m,b);
	printf("mang da gop la: \n");
	gopmang(n,a,m,b,p,c);
		
}


