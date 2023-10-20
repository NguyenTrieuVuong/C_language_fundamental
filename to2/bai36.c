#include<stdio.h>
float nhapmang(int n, float a[50])
{
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
	printf("mang da nhap la: \n");
	for(i=0; i<n; i++)
	{
		printf("%.2f \t",a[i]);
	}
	printf("\n");
	return 0;
}
float locmang(int n, float a[50])
{
	int i,j,k;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[j]==a[i]){
				for(k=j; k<n; k++){
					a[k]=a[k+1];
				}
				n--;
			}
		}
	}
	printf("mang sap xep la: \n");
	for(i=0; i<n; i++){
		printf("%.2f \t",a[i]);
	}
		printf("\n");
	return 0;
}
int main()
{
	int i,n,j,k;
	float a[50];
	printf("nhap so phan tu mang a: \n");
	scanf("%d",&n);
	nhapmang(n,a);
	xuatmang(n,a);
	locmang(n,a);
}
	
